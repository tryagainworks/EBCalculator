#include "dlgsettings.h"
#include "ui_dlgsettings.h"

dlgSettings::dlgSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgSettings)
{
    ui->setupUi(this);

}

dlgSettings::~dlgSettings()
{
    delete ui;
}

void dlgSettings::on_dlgSettings_rejected()
{
    clsActivityAccess::self()->fnSetNextActivity(actMain);
}

void dlgSettings::on_cmdBack_clicked()
{
    clsActivityAccess::self()->fnSetNextActivity(actMain);
    this->accept();
}
