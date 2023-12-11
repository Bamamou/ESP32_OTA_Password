# ESP32_OTA_Password
This is a simple OTA for ESP32 with a password that allows you to update your firmware over the air with bin and or other files.
The code was tested on an ESP32 DEV board and it works perfectly, but it needs to be tested on EVOKE Motorcycles ESP#@ CAN ECU Board. 
The next step is to add the code of the Wifi_With_OTA repository where the ESP32 scans all the nearby wifi, and you can use your phone or other devices to connect the ESP32 to the desired wifi network.
If the above feature is added, the user will connect to their own WiFi and update their devices independently.
# Note
1) SSID: FLYRouter-e920 (It should be changed with your own network SSID)
2) Password: b33cd675
3) username: evoke
4) Password: nicolas
#Present features
1)  Over The Air (OTA) firmware update
2)  Vanilla Free RTOS task manager
3)  Classic Serial Bluetooth or Serial BT
# Next feature 
1) Be able to scan the nearby network and connect to the desired wifi.
2) Upgrade the web page with pictures and other animations.
3) Add a forgot password button
