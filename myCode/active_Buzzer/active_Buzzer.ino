/*
 * Electronic buzzers are DC-powered and equipped with an integrated circuit. 
 * They are widely used in computers, printers, photocopiers, alarms, electronic toys, automotive electronic devices, telephones, timers and other electronic products 
 * for voice devices. Buzzers can be categorized as active and passive ones. Turn the pins of two buzzers face up. 
 * The one with a green circuit board is a passive buzzer, while the other enclosed with a black tape is an active one.
The difference between the two is that an active buzzer has a built-in oscillating source, so it will generate a sound when electrified. 
A passive buzzer does not have such a source so it will not tweet if DC signals are used; instead, you need to use square waves whose frequency is between 2K and 5K to drive it. 
The active buzzer is often more expensive than the passive one because of multiple built-in oscillating circuits.
 */
int buzzer = 12;//the pin of the active buzzer
void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
}
void loop()
{
 unsigned char i;
 while(1)
 {
   //output an frequency
   for(i=0;i<80;i++)
   {
    digitalWrite(buzzer,HIGH);
    delay(1);//wait for 1ms
    digitalWrite(buzzer,LOW);
    delay(1);//wait for 1ms
    }
    //output another frequency
     for(i=0;i<100;i++)
      {
        digitalWrite(buzzer,HIGH);
        delay(2);//wait for 2ms
        digitalWrite(buzzer,LOW);
        delay(2);//wait for 2ms
      }
  }
} 
