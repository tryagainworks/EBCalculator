#ifndef CLSACTIVITYACCESS_H
#define CLSACTIVITYACCESS_H
#include <QDialog>
#include "QIntValidator"

enum NextActivity {
actMain=1,
actGlobalCalculator,
actMotorCalculator,
actSettings,
actNone
};

class clsActivityAccess
{
    void fnSetActivityState(bool blnMain, bool blnGlobalCalc,bool blnMotorCalc ,bool blnSettings);
public:
    static clsActivityAccess *obj;
    static clsActivityAccess* self();
    void destroyThis();
    QIntValidator *qintvalid;
    clsActivityAccess();
    ~clsActivityAccess();
    void fnSetNextActivity(NextActivity na, bool blnExitCurrentActivity=true, QDialog *dlg=0);

    bool blnShowMain;
    bool blnShowGlobalCalc;
    bool blnShowMotorCalc;
    bool blnShowSettings;
};

#endif // CLSACTIVITYACCESS_H
