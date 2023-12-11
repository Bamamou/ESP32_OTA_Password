/* 
| This is the website for updating the backend firmware and it is a JavaScript. 
| Here we onl;y have two sections, the loginIndex and the SeverIndex which are used in the main.cpp file.
|
*/
#ifndef __TASK_WEB_H__
#define __TASK_WEB_H__

//#include"Global_Const.h"
#include<WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <Update.h>
#include "Global_variable.h"
// the task code that run the website
void taskCode_Web(void *pvParameters);

 #endif
 