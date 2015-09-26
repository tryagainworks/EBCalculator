#include "clssettingvarriables.h"
clsSettingVarriables* clsSettingVarriables::obj=0;

clsSettingVarriables* clsSettingVarriables::self(){
    if(!obj)
    {
        obj=new clsSettingVarriables();
        return obj;
    }
    else
        return obj;
}

void clsSettingVarriables::destroyThis(){
    if(obj)
    {
        delete obj;
        obj=0;
    }
}

clsSettingVarriables::clsSettingVarriables()
{
    fltFixedAmountTill100=20.00;
    fltFixedAmountTill200=20.00;
    fltFixedAmountTill500=30.00;
    fltFixedAmountAbove500=40.00;

    fltUnitRateTill100=3.00;

    fltUnitRateTill200=3.25;

    fltUnitRateTill500_200=3.50;
    fltUnitRateTill500_300=4.60f;

    fltUnitRateAbove500_200=3.5;
    fltUnitRateAbove500_300=4.6f;
    fltUnitRateAbove500_above=6.6f;

    fltUnitRateTill100_Old=1.00;

    fltUnitRateTill200_Old=1.50;

    fltUnitRateTill500_200_Old=2.00;
    fltUnitRateTill500_300_Old=3.00;
}

clsSettingVarriables::~clsSettingVarriables()
{

}

