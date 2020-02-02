bool WinstonPower::isCharging()
{
  !digitalRead(pin_num); //reads the digital value from the STAT pin and inverts it
                         //so if it is charging, the STAT value is 0, but the computer 
                         // inverts it and outputs a 1
                         // pin_num is the number the pin is connected to 
  
}

uint16_t WinstonPower::getBatteeryVoltage()
{
  
}
