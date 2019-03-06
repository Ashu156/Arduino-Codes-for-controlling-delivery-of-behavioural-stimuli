// This script controls the delivery of stimuli during recall of fear memory
// in the linear track. The CS is delivered as pips (100 ms ON and 900 ms OFF)
// thus being delivered at a rate of 1 Hz.

#define LED1 8 //SPEAKER
#define LED2 13 // LIGHT
               

void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT); // Defining pins as output
pinMode(LED2,OUTPUT); // Defining pins as output

// Switch the LED to start experiment
digitalWrite(LED1, LOW); //turns the SPEAKER off
digitalWrite(LED2, LOW);


// Generating the stimulus
for (int y=0; y<6; y++){
delay(60000);
for(int x=0; x<30; x++){
delay(900);             //ITI including time length of stimulus
digitalWrite(LED1, HIGH);  // TTL on
delay(100);             //waits for 1 second
digitalWrite(LED1, LOW); //TTL off
digitalWrite(LED2, LOW);
}}

digitalWrite(LED2, HIGH);
delay(10000);
digitalWrite(LED2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
