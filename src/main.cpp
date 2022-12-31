#include <Homie.h>

#define DEBUG 1

#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug(x)
#define debugln(x)
#endif

void setup() {
  Serial.begin(115200);
  Serial << endl << endl;
  
  Homie_setFirmware("awesome-relay", "1.0");


  
  debugln("Firmware set!");
  debugln("Entering Homie.setup()");
  Homie.setup();
  debugln("Leaving Homie.setup()");
}

void loop() {
  Homie.loop();
}