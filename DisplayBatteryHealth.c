#include <stdio.h>
#include "BMS_BatteryCheck.h"


const char *BatteryHealthMessage_ENG[] =
{
    "is Unstable! Take Action Immediately!!!",
    "is Stable"
    "is approaching unstability !!!"
};

const char *BatteryHealthMessage_DEU[] =
{
    "ist instabil! Sofort handeln!!!",
    "ist stabil"
    "nähert sich der Unstabilität!!!"
};


/**
***************************************************************************************************
* Function Name: PrintBatteryHealthStatus
* 
* Function Description: Displays the BMS battery status message.
*
* \param  BatteryData_t BatteryData
*         int IndexOfBatteryHealthMessage
*         
* \return  void
* \retval  None
***************************************************************************************************
*/
void PrintBatteryHealthStatus(BatteryData_t BatteryData, int IndexOfBatteryHealthMessage, int language)
{
    if(language == BMS_ENGLISH)
    {
        printf("%s %s \n", BatteryData.BatteryParticular, BatteryHealthMessage_ENG[IndexOfBatteryHealthMessage]);
    }
    else
    {
        printf("%s %s \n", BatteryData.BatteryParticular, BatteryHealthMessage_DEU[IndexOfBatteryHealthMessage]);
    }
}
