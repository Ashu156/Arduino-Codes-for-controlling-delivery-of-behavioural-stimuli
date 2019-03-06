// This script basically checks if the stimulus delivery circuitry is working 
// fine. Just a quick check before starting the experiment always helps. The whole
// experiment takes at not more than 60 seconds.

#define LED2 8 //SPEAKER                  
               
#define LED1 13 // LED

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(LED1,OUTPUT); // Defining pins as output
pinMode(LED2,OUTPUT); // Defining pins as output

// Switch the LED on to start experiment
delay(5000); //delay while setting the animal up
digitalWrite(LED1,HIGH);// turns the LED on
delay(2000);
digitalWrite(LED1,LOW);// turns the LED off

// Habituation
delay(5000);
digitalWrite(LED2,HIGH); //TTL on
delay(2000);
digitalWrite(LED2,LOW);
delay(5000);
 
 //
digitalWrite(LED2,HIGH); //TTL on
delay(2000);
digitalWrite(LED2,LOW);
delay(5000);
digitalWrite(LED1,HIGH);// turns the LED on
delay(2000);
digitalWrite(LED1,LOW);// turns the LED off
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0) {
                // read the incoming byte:
        Serial.println(Serial.read());     
   if(Serial.read()!=0)
   {digitalWrite(LED2,HIGH); //TTL on
    delay(2000);
     digitalWrite(LED2,LOW);
  }
}
                
}
