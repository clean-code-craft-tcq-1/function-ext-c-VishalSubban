typedef struct{
    float BatteryDataLowerLimit;
    float BatteryDataUpperLimit;
    const char* BatteryParticular;
}BatteryData_t;

void PrintBatteryHealthStatus(BatteryData_t BatteryData, int IndexOfBatteryHealthMessage, int language);

int IsTemperatureStable(float Temperature, int language);

int IsSocStable(float SOC,int language);

int IschargeRateStable(float chargeRate, int language);

int IsBatteryOk(float temperature, float soc, float chargeRate, int language);

#define BATTERY_HEALTH_ALARM 2
#define BATTERY_HEALTH_OK 1
#define BATTERY_HEALTH_NOT_OK 0
#define BMS_ENGLISH 0
#define BMS_GERMAN 1
