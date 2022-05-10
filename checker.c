#include <stdio.h>
#include <assert.h>
#include "header.h"

int isTemperatureInRange(float temperature)
{
    Std_ReturnType RetVal = E_OK;
    if(temperature < 0 || temperature > 45) 
    {
      printf("Temperature out of range!\n");
      RetVal = E_NOT_OK;
    }
    return RetVal;
}

int isSocInRange(float soc)
{
    Std_ReturnType RetVal = E_OK;
    if(soc < 20 || soc > 80) 
    {
      printf("State of Charge out of range!\n");
      RetVal = E_NOT_OK;
    }
    return RetVal;
}

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

int batteryIsOk(float temperature, float soc, float chargeRate) {
  Std_ReturnType RetVal = E_OK;
  RetVal = isTemperatureInRange(temperature);
  RetVal |= isSocInRange(soc);
  RetVal |= isChargeRateInRange(chargeRate);
  return RetVal;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
