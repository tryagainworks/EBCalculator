#include "dlgmain.h"
#include "ui_dlgmain.h"

dlgMain::dlgMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgMain)
{
    ui->setupUi(this);
    objAA=clsActivityAccess::self();
}

dlgMain::~dlgMain()
{
    delete ui;
}

void dlgMain::on_dlgMain_rejected()
{
    objAA->fnSetNextActivity(actNone);
}

void dlgMain::on_cmdExit_clicked()
{
    objAA->fnSetNextActivity(actNone);
    this->accept();
}

void dlgMain::on_cmdGlobalCalc_clicked()
{
    objAA->fnSetNextActivity(actGlobalCalculator);
    this->accept();
}

void dlgMain::on_cmdWaterMotor_clicked()
{
    objAA->fnSetNextActivity(actMotorCalculator);
    this->accept();
}

void dlgMain::on_cmdSettings_clicked()
{
    objAA->fnSetNextActivity(actSettings);
    this->accept();
}
