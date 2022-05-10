typedef int Std_ReturnType;
#define E_OK 0x01u
#define E_NOT_OK 0x00u

int isTemperatureInRange(float temperature);
int isSocInRange(float soc);
int isSocInRange(float chargeRate);
int batteryIsOk(float temperature, float soc, float chargeRate);
