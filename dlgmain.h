#ifndef DLGMAIN_H
#define DLGMAIN_H

#include <QDialog>
#include "clsactivityaccess.h"

namespace Ui {
class dlgMain;
}

class dlgMain : public QDialog
{
    Q_OBJECT
    clsActivityAccess *objAA;
public:
    explicit dlgMain(QWidget *parent = 0);
    ~dlgMain();

private slots:

    void on_dlgMain_rejected();

    void on_cmdExit_clicked();

    void on_cmdGlobalCalc_clicked();

    void on_cmdWaterMotor_clicked();

    void on_cmdSettings_clicked();

private:
    Ui::dlgMain *ui;
};

#endif // DLGMAIN_H
