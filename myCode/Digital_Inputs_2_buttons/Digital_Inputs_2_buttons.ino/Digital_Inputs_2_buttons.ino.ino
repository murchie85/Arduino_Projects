// this is for two buttons which switch a led on and off. 
/*
 * Load the sketch onto your UNO board. Pressing the left button will turn the LED on while pressing the right button will turn it off.
The first part of the sketch defines three variables for the three pins that are to be used. The 'ledPin' is the output pin and 'buttonApin
' will refer to the switch nearer the top of the breadboard and 'buttonBpin' to the other switch.
The 'setup' function defines the ledPin as being an OUTPUT as normal, but now we have the two inputs to deal with. 
In this case, we use the set the pinMode to be 'INPUT_PULLUP' like this:
 */
int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  //default is high unless pressed
  pinMode(buttonBpin, INPUT_PULLUP);  // default is high unless pressed
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
