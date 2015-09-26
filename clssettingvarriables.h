#ifndef CLSSETTINGVARRIABLES_H
#define CLSSETTINGVARRIABLES_H
#include "clssettingsbase.h"

class clsSettingVarriables : clsSettingsBase
{
public:
    static clsSettingVarriables *obj;
    static clsSettingVarriables* self();
    void destroyThis();

    float fltFixedAmountTill100;
    float fltFixedAmountTill200;
    float fltFixedAmountTill500;
    float fltFixedAmountAbove500;

    float fltUnitRateTill100;

    float fltUnitRateTill200;

    float fltUnitRateTill500_200;
    float fltUnitRateTill500_300;

    float fltUnitRateAbove500_200;
    float fltUnitRateAbove500_300;
    float fltUnitRateAbove500_above;

    float fltUnitRateTill100_Old;

    float fltUnitRateTill200_Old;

    float fltUnitRateTill500_200_Old;
    float fltUnitRateTill500_300_Old;

    clsSettingVarriables();
    ~clsSettingVarriables();
};

#endif // CLSSETTINGVARRIABLES_H
