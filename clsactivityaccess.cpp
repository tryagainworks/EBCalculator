#include "clsactivityaccess.h"

clsActivityAccess* clsActivityAccess::obj=0;

clsActivityAccess* clsActivityAccess::self(){
    if(!obj)
    {
        obj=new clsActivityAccess();
        obj->blnShowGlobalCalc=false;
        obj->blnShowMotorCalc=false;
        obj->blnShowSettings=false;
        obj->blnShowMain=true;
        return obj;
    }
    else
        return obj;
}

void clsActivityAccess::destroyThis(){
    if(obj!=NULL)
    {
        delete obj;
        obj=0;
    }
}

clsActivityAccess::clsActivityAccess()
{
    qintvalid=new QIntValidator();
}

clsActivityAccess::~clsActivityAccess()
{
    delete qintvalid;
}

void clsActivityAccess::fnSetActivityState(bool blnMain, bool blnGlobalCalc,bool blnMotorCalc ,bool blnSettings){
    blnShowMain=blnMain;
    blnShowGlobalCalc=blnGlobalCalc;
    blnShowMotorCalc=blnMotorCalc;
    blnShowSettings=blnSettings;
}


void clsActivityAccess::fnSetNextActivity(NextActivity na, bool blnExitCurrentActivity){//, QDialog *dlg){
    //dlg = new QDialog(0,0);
    switch(na){
    case actMain:
        fnSetActivityState(true,false,false,false);
        break;
    case actGlobalCalculator:
        fnSetActivityState(false,true,false,false);
        break;
    case actMotorCalculator:
        fnSetActivityState(false,false,true,false);
        break;
    case actSettings:
        fnSetActivityState(false,false,false,true);
        break;
    case actNone:
        fnSetActivityState(false,false,false,false);
        break;
    }
    if(!blnExitCurrentActivity){

    }

}
