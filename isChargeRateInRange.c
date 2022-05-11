#include "header.h"

int isChargeRateInRange(float chargeRate)
{
    Std_ReturnType RetVal = E_OK;
    if(chargeRate > 0.8) 
    {
      printf("Charge Rate out of range!\n");
      RetVal = E_NOT_OK;
    }
    return RetVal;
}
