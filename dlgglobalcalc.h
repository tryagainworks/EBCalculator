#ifndef DLGGLOBALCALC_H
#define DLGGLOBALCALC_H

#include <QDialog>
#include "clsactivityaccess.h"
#include "clsebamtprocs.h"
#include "qscroller.h"
#include "qscrollerproperties.h"

namespace Ui {
class dlgGlobalCalc;
}

class dlgGlobalCalc : public QDialog
{
    Q_OBJECT
    clsActivityAccess* objAA;
    clsEBAmtProcs* objAP;
public:
    explicit dlgGlobalCalc(QWidget *parent = 0);
    ~dlgGlobalCalc();

private slots:
    void on_dlgGlobalCalc_rejected();

    void on_cmdBack_clicked();

    void on_cmdCalculate_clicked();

private:
    Ui::dlgGlobalCalc *ui;
};

#endif // DLGGLOBALCALC_H
