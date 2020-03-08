#include <Motor_RS.h>

Motor_RS motor(7,6);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  motor.forward();
  delay(3000);
  motor.back();
  delay(3000);
  motor.stop();
  delay(3000);
}
