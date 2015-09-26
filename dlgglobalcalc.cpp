#include "dlgglobalcalc.h"
#include "ui_dlgglobalcalc.h"

dlgGlobalCalc::dlgGlobalCalc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgGlobalCalc)
{
    ui->setupUi(this);
    objAA=clsActivityAccess::self();
    objAP=clsEBAmtProcs::self();
    ui->txtConsumedUnit->setValidator(new QIntValidator());

    QScrollerProperties sp;

    sp.setScrollMetric(QScrollerProperties::DragVelocitySmoothingFactor, 0.6);
    sp.setScrollMetric(QScrollerProperties::MinimumVelocity, 0.0);
    sp.setScrollMetric(QScrollerProperties::MaximumVelocity, 0.5);
    sp.setScrollMetric(QScrollerProperties::AcceleratingFlickMaximumTime, 0.4);
    sp.setScrollMetric(QScrollerProperties::AcceleratingFlickSpeedupFactor, 1.2);
    sp.setScrollMetric(QScrollerProperties::SnapPositionRatio, 0.2);
    sp.setScrollMetric(QScrollerProperties::MaximumClickThroughVelocity, 0);
    sp.setScrollMetric(QScrollerProperties::DragStartDistance, 0.001);
    sp.setScrollMetric(QScrollerProperties::MousePressEventDelay, 0.5);
    QScroller* scroller = QScroller::scroller(ui->scrollArea);

    scroller->grabGesture(ui->scrollArea, QScroller::LeftMouseButtonGesture);

    scroller->setScrollerProperties(sp);
}

dlgGlobalCalc::~dlgGlobalCalc()
{
    delete ui;
}

void dlgGlobalCalc::on_dlgGlobalCalc_rejected()
{
    objAA->fnSetNextActivity(actMain);
}

void dlgGlobalCalc::on_cmdBack_clicked()
{
    objAA->fnSetNextActivity(actMain);
    this->accept();
}

void dlgGlobalCalc::on_cmdCalculate_clicked()
{
    QString strCalcMethod="";
    int intConsumedUnit = ui->txtConsumedUnit->text().toInt();

    float fltActualAmount = objAP->fnCalculateEB(intConsumedUnit, strCalcMethod);
    strCalcMethod+="</Table></body></html>";
    ui->lblCalcMethod->setText(strCalcMethod);
    ui->lblAmountToPay->setText("Amount To Pay : " + QString::number(fltActualAmount));
}
