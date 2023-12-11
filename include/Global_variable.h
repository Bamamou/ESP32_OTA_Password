/* 
| The header file for varibale used in this project such as external class objects or instances 
| This 
|
*/
#ifndef __GLOBAL_VARIABLES_H__
#define __GLOBAL_VARIABLES_H__

#include<Arduino.h>
#include "class_TaskManager.h"

/* #region TASK_HANDLES */
extern TaskManager task_Bluetooth;         // An instance of the Vanilla RTOS task manager
const uint8_t ledPin = BUILTIN_LED;        //  The BuiltIN_LED pin 

#endif