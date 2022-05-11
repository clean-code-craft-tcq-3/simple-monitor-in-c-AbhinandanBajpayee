#include "header.h"

int batteryIsOk(float temperature, float soc, float chargeRate) {
  Std_ReturnType RetVal = E_OK;
  RetVal = isTemperatureInRange(temperature);
  RetVal |= isSocInRange(soc);
  RetVal |= isChargeRateInRange(chargeRate);
  return RetVal;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == E_OK);
  assert(batteryIsOk(50, 85, 0) == E_NOT_OK);
  assert(batteryIsOk(60, 25, 0.7) == E_NOT_OK);
  assert(batteryIsOk(25, 85, 0) == E_NOT_OK);
  assert(batteryIsOk(25, 65, 1) == E_NOT_OK);
  assert(batteryIsOk(60, 90, 1) == E_NOT_OK);
}
