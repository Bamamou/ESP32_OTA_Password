/*
| this is tasks_Bluetooh.cpp, the file has the codes for the task that takes care of classic bluetooth or Serial BT and
| This file will require some additional fucntions that take care of more actions.
|*/

#include "tasks_Bluetooth.h"
BluetoothSerial SerialBT; // Used to send serial data via bluetooh
BLEScan *pBLEScan;        // Used to scan the BLE beacons

// Code for the task that takes care of classic Bluetooth
void taskCode_Bluetooth(void *pvParameters)
{
    // Init BLE device
    BLEDevice::init("");

    // Init Bluetooth device
    // SerialBT.begin(vehicleInfo.btDeviceName);
    SerialBT.begin("ESP32_BLE_OTA");

    while (true)
    {
       if (SerialBT.available()) {
       char incomingByte = SerialBT.read();  

       if (incomingByte == '1') {
        Serial.println("Turning On LED");
        digitalWrite(ledPin, HIGH);  
        }
      else if (incomingByte == '0') {
        Serial.println("Turning Off LED");
        digitalWrite(ledPin, LOW);
       }
      }
      // Put the task to sleep
     vTaskDelay(task_Bluetooth.getInterval() / portTICK_PERIOD_MS);  
    }
}
