/*
|This small code allows is my small OTA for ESP32 
|In the login page you will need your password and username: the default one is evoke as username and nicolas as password 
*/

 #include<Arduino.h>
 #include<main.h>


/*
 * setup function
 */
void setup(void) {
 Serial.begin(115200);
  pinMode(ledPin,OUTPUT);
  task_Bluetooth.runInCore0(taskCode_Bluetooth, "Bluetooth", 3000, 500, 3);
  task_Bluetooth.runInCore1(taskCode_Web, "Web", 3000, 1, 2);
}

 
void loop(void) {
  // server.handleClient();
  // delay(1);
}