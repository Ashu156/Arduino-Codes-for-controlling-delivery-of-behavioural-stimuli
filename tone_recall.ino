#define LED1 8 //SPEAKER
#define LED2 13 // LIGHT
               

void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT); // Defining pins as output
pinMode(LED2,OUTPUT); // Defining pins as output

// Switch the LED to start experiment
digitalWrite(LED1, LOW); //turns the SPEAKER off
digitalWrite(LED2, LOW);
delay(5000); //delay while setting the animal up
digitalWrite(LED2,HIGH);// turns the LED on
delay(2000);
digitalWrite(LED2,LOW);// turns the LED off

// Generating the stimulus
delay (450000);
for (int y=0; y<6; y++){
delay(150000);

            //ITI including time length of stimulus
digitalWrite(LED1, HIGH);  // TTL on
delay(30000);             //waits for 1 second
digitalWrite(LED1, LOW); //TTL off
}
delay(5000);
digitalWrite (LED2,HIGH);
delay (2000);
digitalWrite(LED2,LOW)
;
}

void loop() {
  // put your main code here, to run repeatedly:

}
