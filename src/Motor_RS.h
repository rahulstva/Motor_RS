/*
  Motor_RS.h - Library for L293D
  Created by Rahul Shrivastava, March 8, 2020.
  Released into the public domain.
*/
#ifndef Motor_RS_h
#define Motor_RS_h

#include "Arduino.h"

class Motor_RS
{
  public:
    Motor_RS(int pin1, int pin2);
    void forward();
    void back();
    void stop();
  private:
    int _pin1;
    int _pin2;
};

#endif
