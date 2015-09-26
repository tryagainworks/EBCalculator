#include "clsebamtprocs.h"

clsEBAmtProcs* clsEBAmtProcs::obj=0;

clsEBAmtProcs* clsEBAmtProcs::self(){
    if(!obj)
    {
        obj=new clsEBAmtProcs();
        return obj;
    }
    else
        return obj;
}

void clsEBAmtProcs::destroyThis(){
    if(obj)
    {
        delete obj;
        obj=0;
    }
}

clsEBAmtProcs::clsEBAmtProcs()
{
    objSVar = clsSettingVarriables::self();
}

clsEBAmtProcs::~clsEBAmtProcs()
{

}

float clsEBAmtProcs::fnCalculateEB(int intConsumedUnit, QString &strCalcMethod){

    if (intConsumedUnit) {
            strCalcMethod+="<Table border = 1  style=\"table-layout: fixed; width: 100%\">";
            float FltOldEbAmount = 0;
            float fltSubsidy = 0;
            float fltEBAmount = 0;
            int intEBUnits = 0;
            float fltActualAmount = 0;
            intEBUnits = intConsumedUnit;
            if (intEBUnits > 0 && intEBUnits <= 100) {
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#ffaa00;\">Detail</span></I></td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">Amount(in Rs)</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Fixed Amount</td><td style=\"word-wrap: break-word\"><td style=\"word-wrap: break-word\"></td>"+QString::number(objSVar->fltFixedAmountTill100)+"</td></tr>";

                FltOldEbAmount = objSVar->fltFixedAmountTill100 + (intEBUnits*objSVar->fltUnitRateTill100_Old);
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Old Unit Rate (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill100_Old)+"</td><td style=\"word-wrap: break-word\">"+QString::number((intEBUnits*objSVar->fltUnitRateTill100_Old))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Old Amount Total</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(FltOldEbAmount)+"</td></tr>";

                fltEBAmount = objSVar->fltFixedAmountTill100 +  (intEBUnits*objSVar->fltUnitRateTill100);
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Unit Rate (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill100)+"</td><td style=\"word-wrap: break-word\">"+QString::number((intEBUnits*objSVar->fltUnitRateTill100))+"</td></tr>";

                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Amount Total</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(fltEBAmount)+"</td></tr>";

                fltSubsidy = fltEBAmount - FltOldEbAmount;
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Subsidy (Old Amount - New Amount)</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(fltSubsidy)+"</td></tr>";

                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#00aa00;\">Summary</span></I></td><td style=\"word-wrap: break-word\"></td></tr>";

                fltActualAmount = FltOldEbAmount;
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Amount to Pay</td><td style=\"word-wrap: break-word\">(New Amount - Subsidy)</td><td style=\"word-wrap: break-word\">"+QString::number(fltActualAmount)+"</td></tr>";
            }
            else if (intEBUnits <= 200) {
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#ffaa00;\">Detail</span></I></td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">Amount(in Rs)</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Fixed Amount</td><td style=\"word-wrap: break-word\"><td style=\"word-wrap: break-word\"></td>"+QString::number(objSVar->fltFixedAmountTill200)+"</td></tr>";

                FltOldEbAmount = objSVar->fltFixedAmountTill200 + (objSVar->fltUnitRateTill200_Old * intEBUnits);
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Old Unit Rate (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill200_Old)+"</td></td><td style=\"word-wrap: break-word\">"+QString::number((objSVar->fltUnitRateTill200_Old * intEBUnits))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Old Amount Total</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(FltOldEbAmount)+"</td></tr>";

                fltEBAmount = objSVar->fltFixedAmountTill200 + (objSVar->fltUnitRateTill200 * intEBUnits);
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Unit Rate (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill200)+"</td><td style=\"word-wrap: break-word\">"+QString::number(fltEBAmount)+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#00aa00;\">Summary</span></I></td><td style=\"word-wrap: break-word\"></td></tr>";
                //strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Actual Amount</td><td style=\"word-wrap: break-word\">"+QString::number(fltEBAmount)+"</td></tr>";

                fltSubsidy = fltEBAmount - FltOldEbAmount;
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Subsidy (Old Amount - New Amount)</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(fltSubsidy)+"</td></tr>";

                fltActualAmount = FltOldEbAmount;
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Amount to Pay</td><td style=\"word-wrap: break-word\">(New Amount - Subsidy)</td><td style=\"word-wrap: break-word\">"+QString::number(fltActualAmount)+"</td></tr>";
            }
            else if (intEBUnits <= 500) {
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#ffaa00;\">Detail</span></I></td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">Amount(in Rs)</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Fixed Amount</td><td style=\"word-wrap: break-word\"><td style=\"word-wrap: break-word\"></td>"+QString::number(objSVar->fltFixedAmountTill500)+"</td></tr>";

                FltOldEbAmount = objSVar->fltFixedAmountTill500 + (200 * objSVar->fltUnitRateTill500_200_Old) + ((intEBUnits - 200) * objSVar->fltUnitRateTill500_300_Old);
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Old Unit Rate Till 200 (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill500_200_Old)+"</td><td style=\"word-wrap: break-word\">"+QString::number((200 * objSVar->fltUnitRateTill500_200_Old))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Old Unit Rate Above 200 (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill500_300_Old)+"</td><td style=\"word-wrap: break-word\">"+QString::number(((intEBUnits - 200) * objSVar->fltUnitRateTill500_300_Old))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Old Amount Total</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(FltOldEbAmount)+"</td></tr>";

                fltEBAmount = objSVar->fltFixedAmountTill500 + (200 * objSVar->fltUnitRateTill500_200) + ((intEBUnits - 200) * objSVar->fltUnitRateTill500_300);
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Unit Rate Till 200 (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill500_200)+"</td><td style=\"word-wrap: break-word\">"+QString::number((200 * objSVar->fltUnitRateTill500_200))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Unit Rate Above 200 (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateTill500_300)+"</td><td style=\"word-wrap: break-word\">"+QString::number(((intEBUnits - 200) * objSVar->fltUnitRateTill500_300))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Amount Total</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(fltEBAmount)+"</td></tr>";


                fltSubsidy = fltEBAmount - FltOldEbAmount;
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Subsidy (Old Amount - New Amount)</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(fltSubsidy)+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#00aa00;\">Summary</span></I></td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\"></td></tr>";
                fltActualAmount = FltOldEbAmount;
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Amount to Pay</td><td style=\"word-wrap: break-word\">(New Amount - Subsidy)</td><td style=\"word-wrap: break-word\">"+QString::number(fltActualAmount)+"</td></tr>";
            }
            else if (intEBUnits > 500) {
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#ffaa00;\">Detail</span></I></td><td style=\"word-wrap: break-word\">Amount(in Rs)</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Fixed Amount</td><td style=\"word-wrap: break-word\"><td style=\"word-wrap: break-word\"></td>"+QString::number(objSVar->fltFixedAmountAbove500)+"</td></tr>";
                fltEBAmount = objSVar->fltFixedAmountAbove500 + (200 * objSVar->fltUnitRateAbove500_200) + (300 * objSVar->fltUnitRateAbove500_300) + ((intEBUnits - 500) * objSVar->fltUnitRateAbove500_above);
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Unit Rate Till 200 (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateAbove500_200)+"</td><td style=\"word-wrap: break-word\">"+QString::number((200 * objSVar->fltUnitRateAbove500_200))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Unit Rate Till 300 (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateAbove500_300)+"</td><td style=\"word-wrap: break-word\">"+QString::number((300 * objSVar->fltUnitRateAbove500_300))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">New Unit Rate Above 300 (Per Unit)</td><td style=\"word-wrap: break-word\">"+QString::number(objSVar->fltUnitRateAbove500_above)+"</td><td style=\"word-wrap: break-word\">"+QString::number(((intEBUnits - 500) * objSVar->fltUnitRateAbove500_above))+"</td></tr>";
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\"><I><span style=\" color:#00aa00;\">Summary</span></I></td><td.</td><td style=\"word-wrap: break-word\"></td></tr>";
                fltActualAmount = fltEBAmount;
                strCalcMethod+="<tr><td style=\"word-wrap: break-word\">Amount to Pay</td><td style=\"word-wrap: break-word\"></td><td style=\"word-wrap: break-word\">"+QString::number(fltActualAmount)+"</td></tr>";
            }
            strCalcMethod+="</Table>";
            return fltActualAmount;
        }
    return 0.0;
}

