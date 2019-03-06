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
for (int y=0; y<20; y++){
  
delay(60000);

            
digitalWrite(LED1, HIGH);  // TTL on
delay(1000);             //waits for 1 second
digitalWrite(LED1, LOW); //TTL off
digitalWrite(LED2, LOW);
}


}

void loop() {
  // put your main code here, to run repeatedly:

}
