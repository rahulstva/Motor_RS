/*
  Motor_RS.cpp - Library for L293D.
  Created by Rahul Shrivastava, March 8, 2020.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Motor_RS.h"

Motor_RS::Motor_RS(int pin1, int pin2)
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  _pin1 = pin1;
  _pin2 = pin2;
}

void Motor_RS::forward()
{
  digitalWrite(_pin1, HIGH);
  digitalWrite(_pin2, LOW);  
}

void Motor_RS::back()
{
  digitalWrite(_pin1, LOW);
  digitalWrite(_pin2, HIGH);  
}
void Motor_RS::stop()
{
  digitalWrite(_pin1, HIGH);
  digitalWrite(_pin2, HIGH);  
}