#define BLYNK_PRINT Serial
 
#include <ESP8266WiFi.h>
 
#include <BlynkSimpleEsp8266.h>
 
 
// You should get Auth Token in the Blynk App.
 
// Go to the Project Settings (nut icon).
 
char auth[] = "3SJ6uAANMwXgTxmQbRGER6w9hBJceMRm";
 
 
// Your WiFi credentials.
 
// Set password to "" for open networks.
 
char ssid[] = "Design_Studio";
 
char pass[] = "vascsc2018";
 
 
void setup()
 
{
 
// Debug console
 
Serial.begin(9600);
 
Blynk.begin(auth, ssid, pass);
 
Blynk.syncAll(); //This will sync the last state of your device
 
}
 
void loop()
 
{
 
Blynk.run();
 
}
