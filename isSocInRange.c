#include "header.h"

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
