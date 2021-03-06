#include <EBIMU.h>

EBIMU ahrs;

float quaternion[4];

void setup() {
  Serial.begin(57600);
  Serial.flush();

  ahrs.initialize(115200);
}

void loop() {
  while(ahrs.getQuaternion(quaternion) != 1){
    /*
     * Waiting for data ready
     */
  }

  Serial.print("q1 : ");
  Serial.print(quaternion[0]);
  Serial.print("\tq2 : ");
  Serial.print(quaternion[1]);
  Serial.print("\tq3 : ");
  Serial.print(quaternion[2]);
  Serial.print("\tq4 : ");
  Serial.println(quaternion[3]);
}
