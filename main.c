#include <stdio.h>
#include <assert.h>
#include "BMS_BatteryCheck.h"

 int main()
 {
     assert(IsBatteryOk(25, 70, 0.7, BMS_ENGLISH));
     assert(!IsBatteryOk(50, 85, 0, BMS_GERMAN));
     return 0;
 }
