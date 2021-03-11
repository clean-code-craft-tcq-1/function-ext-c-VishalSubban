#include "BMS_BatteryCheck.h"


/**
 ***************************************************************************************************
 * Function Name: IsBatteryOk
 * 
 * Function Description: Checks the overall Battery health status
 *
 * \param  float temperature
 *         float soc
 *         float chargeRate
 *         
 * \return  Integer
 * \retval  TRUE or FALSE indicating overall battery health status.
 ***************************************************************************************************
 */

int IsBatteryOk(float temperature, float soc, float chargeRate, int language) {
  int istemparatureok, issocok, ischargerateok;
  istemparatureok = IsTemperatureStable(temperature, language);
  issocok = IsSocStable(soc, language);
  ischargerateok = IschargeRateStable(chargeRate, language);
  return ( istemparatureok && issocok && ischargerateok);
}
