/*

 GitHub : samueljovial21
 https://github.com/samueljovial21

*/
 
// SoftwareSerial Library
#include <SoftwareSerial.h>

// The serial connection to the GPS module
// GPS RX to ESP32 TX2 
// GPS TX to ESP32 RX2
SoftwareSerial SerialGPS(16, 17);

void setup(){
  // Starting the Serial Monitor at 9600 baudrate
  Serial.begin(9600);
  // Starting the Serial GPS at 9600 baudrate
  SerialGPS.begin(9600);
  // Wait for 3000 miliseconds
  delay(3000); 
}

void loop(){
  while (SerialGPS.available() > 0){
    // get the byte data received from the GPS and write it to serial monitor
    byte gpsData = SerialGPS.read();
    Serial.write(gpsData);
  }
}