#ifndef WinstonPower_h
#define WinstonPower_h

//Standard Arduino Libraries
#include <Arduino.h>

class WinstonPower
{
  private:     //for private variables



  public:      // for public functions
    bool isCharging();
    uinit16_t getBatteryVoltage();
  
};


#endif
