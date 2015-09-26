#include "dlgmain.h"
#include <QApplication>
#include "clsactivityaccess.h"
#include "clsebamtprocs.h"
#include "clssettingvarriables.h"
#include "dlgmain.h"
#include "dlgglobalcalc.h"
#include "dlgmotorcalc.h"
#include "dlgsettings.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

qDebug() <<"Enter!\n";
    while(true){
 qDebug() <<"While\n";
        if(clsActivityAccess::self()->blnShowMain){
            qDebug() <<"Main\n";
               dlgMain *w;
               w= new dlgMain();
               w->setWindowState(Qt::WindowMaximized);
               w->exec();
               delete w;
        }

        if(clsActivityAccess::self()->blnShowGlobalCalc){
               dlgGlobalCalc *w;
               w= new dlgGlobalCalc();
               w->setWindowState(Qt::WindowMaximized);
               w->exec();
               delete w;
        }

        if(clsActivityAccess::self()->blnShowMotorCalc){
               dlgMotorCalc  *w;
                w= new dlgMotorCalc();
                w->setWindowState(Qt::WindowMaximized);
                w->exec();
                delete w;

        }

        if(clsActivityAccess::self()->blnShowSettings){
               dlgSettings *w;
               w=new dlgSettings();
               w->setWindowState(Qt::WindowMaximized);
               w->exec();
               delete w;
        }

        if(!clsActivityAccess::self()->blnShowMain &&
                !clsActivityAccess::self()->blnShowGlobalCalc &&
                !clsActivityAccess::self()->blnShowMotorCalc &&
                !clsActivityAccess::self()->blnShowSettings){
            clsActivityAccess::self()->destroyThis();
            clsEBAmtProcs::self()->destroyThis();
            clsSettingVarriables::self()->destroyThis();
            break;

        }
    }
    a.quit();
}
