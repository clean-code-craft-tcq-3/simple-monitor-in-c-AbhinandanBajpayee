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
