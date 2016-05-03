/*
 * 1.0.9  20160503
 * Add more blinks
 * Add reset 2 option erasing flash
 * Add Status 5 option displaying network info
 * Add syslog check for Wifi connection
 * Resize mqtt_publish log array
 * Change Wifi smartconfig active from 100 to 60 seconds
 * Update Wifi initialization
 * 
 * 1.0.8  20160430
 * Remove use of Wifi config data from SDK
 * Add status 3 (syslog info) and status 4 (flash info)
 * Add restart option to button (5 quick presses)
 * 
 * 1.0.7  20160420
 * Add UDP syslog support
 * Change HOST command to MQTTHOST command
 * Add commands SYSLOG, SERIALLOG and LOGHOST
 * Change hostname to lower case to distinguise between open-sdk version
 * Add support for ESP-12F used in my modified wkaku power socket switch
 * Fix timezone command
 * Add RTC month names for future use
 * Modify button code
 * Remove initialization errors by better use of MQTT loop
 * 
 * 1.0.6  20160406
 * Removed Wifi AP mode
 * Add test for Arduino IDE version >= 1.6.8
 * Fix RTC time sync code
 * 
 * 1.0.5  20160310
 * Initial public release
 * Show debug info by selecting option from IDE Tools Debug port: Serial
 */
