#ifndef CLSEBAMTPROCS_H
#define CLSEBAMTPROCS_H
#include "clssettingvarriables.h"
#include <QString>

class clsEBAmtProcs
{
    clsSettingVarriables *objSVar;
public:
    static clsEBAmtProcs *obj;
    static clsEBAmtProcs* self();
    void destroyThis();


    clsEBAmtProcs();
    ~clsEBAmtProcs();
    float fnCalculateEB(int intConsumedUnit, QString &strCalcMethod);
};

#endif // CLSEBAMTPROCS_H
