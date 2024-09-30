// We define MY_LED to be the LED that we want to blink.
// Updated MY_LED to ledPin

#include "Particle.h"
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t ledPin = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

// Random note to show git tools

// The setup() method is called once when the device boots.
void setup()
{
  // Particle.disconnect();
  // WiFi.off();
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(ledPin, OUTPUT);
}

// The loop() method is called frequently.
void loop() {
  // Three short flashes to represent the letter "S"
  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPin, HIGH);   // Set LED to ON
    delay(150);                   // Delay for 150 milliseconds
    digitalWrite(ledPin, LOW);    // Set LED to OFF
    delay(100);                   // Delay for 100 milliseconds
  }
  // Delay of 200 milliseconds to create a gap between letters
  delay(200);
  // Three short flashes to represent the letter "O"
  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPin, HIGH);   // Set LED to ON
    delay(400);                   // Delay for 400 milliseconds
    digitalWrite(ledPin, LOW);    // Set LED to OFF
    delay(200);                   // Delay for 200 milliseconds
  }
  // Delay of 100 milliseconds to create a gap between letters
  delay(100);
  // Three short flashes to represent the letter "S" again
  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPin, HIGH);   // Set LED to ON
    delay(150);                   // Delay for 150 milliseconds
    digitalWrite(ledPin, LOW);    // Set LED to OFF
    delay(100);                   // Delay for 100 milliseconds
  }
  // Wait for 5 seconds before repeating the S.O.S signal
  delay(5000);
}
