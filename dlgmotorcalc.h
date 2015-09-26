#ifndef DLGMOTORCALC_H
#define DLGMOTORCALC_H

#include <QDialog>
#include "clsactivityaccess.h"
#include "clsebamtprocs.h"
#include "qscroller.h"
#include "qscrollerproperties.h"

namespace Ui {
class dlgMotorCalc;
}

class dlgMotorCalc : public QDialog
{
    Q_OBJECT
    clsActivityAccess *objAA;
    clsEBAmtProcs *objAP;

public:
    explicit dlgMotorCalc(QWidget *parent = 0);
    ~dlgMotorCalc();

private slots:
    void on_dlgMotorCalc_rejected();

    void on_cmdBack_clicked();

    void on_cmdCalculate_clicked();

    void on_fraContainer_destroyed();

private:
    Ui::dlgMotorCalc *ui;
};

#endif // DLGMOTORCALC_H
