/*
| tasks_Bluetooth.h
| Header for tasks_Bluetooth.cpp
| The taskcode is a simple BT code that monitor the built_in LED of the ESP32 dev board.
*/
#ifndef __TASKS_BLUETOOTH_H__
#define __TASKS_BLUETOOTH_H__
#include "Global_variable.h"
#include <Arduino.h>
#include <BluetoothSerial.h>
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEScan.h>
#include <BLEAdvertisedDevice.h>
#include <rom/rtc.h>


// Code for the task that takes care of classic Bluetooth
void taskCode_Bluetooth(void *pvParameters);

// // Code for the task that takes care of Buetooth low energy
// void taskCode_BLE(void *pvParameters);

// // Prints the struct infoToSave via bluetooth
// void printDebugViaBluetooth();

#endif