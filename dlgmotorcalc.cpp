#include "dlgmotorcalc.h"
#include "ui_dlgmotorcalc.h"

dlgMotorCalc::dlgMotorCalc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgMotorCalc)
{
    ui->setupUi(this);
    objAA=clsActivityAccess::self();
    objAP=clsEBAmtProcs::self();

    ui->txtConsumedUnit->setValidator(objAA->qintvalid);
    ui->txt_HW_HoursConsumed->setValidator(objAA->qintvalid);
    ui->txt_HW_MinutesConsumed->setValidator(objAA->qintvalid);
    ui->txt_HW_DaysConsumed->setValidator(objAA->qintvalid);
    ui->txt_SW_HoursConsumed->setValidator(objAA->qintvalid);
    ui->txt_SW_MinutesConsumed->setValidator(objAA->qintvalid);
    ui->txt_SW_DaysConsumed->setValidator(objAA->qintvalid);

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
    QScroller* scroller = QScroller::scroller(ui->scrollAreaNew);

    scroller->grabGesture(ui->scrollAreaNew, QScroller::LeftMouseButtonGesture);

    scroller->setScrollerProperties(sp);
}

dlgMotorCalc::~dlgMotorCalc()
{
    delete ui;
}

void dlgMotorCalc::on_dlgMotorCalc_rejected()
{
    objAA->fnSetNextActivity(actMain);
}

void dlgMotorCalc::on_cmdBack_clicked()
{
    objAA->fnSetNextActivity(actMain);
    this->accept();
}

void dlgMotorCalc::on_cmdCalculate_clicked()
{
    QString strCalcMethod="";

    float fltHWWatts=1000.00;
    float fltSWWatts=600.00;

    float fltMotorUnitConsumed=0;


    float fltHWHours=ui->txt_HW_HoursConsumed->text().toDouble() + (ui->txt_HW_MinutesConsumed->text().toDouble()/60);

    fltMotorUnitConsumed+=(fltHWHours*fltHWWatts*(ui->txt_HW_DaysConsumed->text().toDouble()))/1000;

    float fltSWHours=ui->txt_SW_HoursConsumed->text().toDouble() + (ui->txt_SW_MinutesConsumed->text().toDouble()/60);

    fltMotorUnitConsumed+=(fltSWHours*fltSWWatts*(ui->txt_SW_DaysConsumed->text().toDouble()))/1000;

    int intConsumedUnit = ui->txtConsumedUnit->text().toInt();//-fltMotorUnitConsumed;


    strCalcMethod+="<html><head></head><body><b>Calculation Method : <b><br>";
    strCalcMethod+="<br><h3>Actual Consumed Unit : </h3>";
    float fltAmountWithMotor = objAP->fnCalculateEB(intConsumedUnit, strCalcMethod);

    intConsumedUnit -= fltMotorUnitConsumed;

    strCalcMethod+="<br><h3>Consumed Unit Without Motor Usage : </h3>";

    float fltAmountWithoutMotor = objAP->fnCalculateEB(intConsumedUnit, strCalcMethod);

    strCalcMethod+="<br><h3>Motor Usage Amount : </h3>";
    strCalcMethod+="<table border=1>";
    strCalcMethod+="<tr><td><I><span style=\" color:#ffaa00;\">Details</span></I></td><td></td><td>Amount in Rs</td></tr>";
    strCalcMethod+="<tr><td>Motor Used Units</td><td>"+ QString::number(fltMotorUnitConsumed) +"</td><td></td></tr>";
    strCalcMethod+="<tr><td>Total Amount</td><td></td><td>"+ QString::number(fltAmountWithMotor-fltAmountWithoutMotor) +"</td></tr>";
    strCalcMethod+="<tr><td>To Give</td><td>(Actual Amount-Amount Without Motor Usage)/2</td><td>"+ QString::number((fltAmountWithMotor-fltAmountWithoutMotor)/2) +"</td></tr>";
    strCalcMethod+="</table>";

    strCalcMethod+="</body></html>";

    ui->lblCalcMethod->setText(strCalcMethod);
    ui->lblAmountToPay->setText("Amount To Give : " + QString::number((fltAmountWithMotor-fltAmountWithoutMotor)/2));

}

void dlgMotorCalc::on_fraContainer_destroyed()
{

}
