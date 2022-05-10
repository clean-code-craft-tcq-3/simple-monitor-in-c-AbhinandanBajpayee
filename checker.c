#include <stdio.h>
#include <assert.h>
#include "header.h"

int isTemperatureInRange(float temperature)
{
    Std_ReturnType RetVal = E_OK;
    if(temperature < 0 || temperature > 45) 
    {
      printf("Temperature out of range!\n");
      return E_NOT_OK;
    }
}

int isSocInRange(float soc)
{
    Std_ReturnType RetVal = E_OK;
    if(soc < 20 || soc > 80) 
    {
      printf("State of Charge out of range!\n");
      return E_NOT_OK;
    }
}

int isSocInRange(float chargeRate)
{
    Std_ReturnType RetVal = E_OK;
    if(chargeRate > 0.8) 
    {
      printf("Charge Rate out of range!\n");
      return E_NOT_OK;
    }
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  Std_ReturnType RetVal = E_OK;
  RetVal = isTemperatureInRange(temperature);
  RetVal |= isSocInRange(soc);
  RetVal |= isSocInRange(chargeRate);
  return RetVal;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
