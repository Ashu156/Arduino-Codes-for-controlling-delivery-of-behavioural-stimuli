# define LED1 8                                //SPEAKER
# define LED2 13                              // LIGHT
               

void setup() {
  // put your setup code here, to run once:
pinMode(LED1,OUTPUT);                       // Defining pins as output
pinMode(LED2,OUTPUT);                      // Defining pins as output

// Switch the LED to start experiment
digitalWrite(LED1, LOW);                  // Turns the SPEAKER OFF
digitalWrite(LED2, LOW);                 //  Turns the LED OFF


// Generating the stimulus
for (int y = 0; y < 5; y++) {
  delay(50000);                             // Interval before starting the stimulus presentation (50 s in this case)
for(int x = 0; x < 20; x++){                 // Loops over the commands below for 100 times
delay(10000);                            // Inter-trial interval (10 s in this case)
digitalWrite(LED1, HIGH);               // TTL ON
delay(1000);                           // Waits for 1 second (does not matter in this case as the playback once triggered ON, will continue till the end of it )
digitalWrite(LED1, LOW);              //TTL OFF
digitalWrite(LED2, HIGH);           // turns the LED ON, indicating end of the experiment
delay(2000);                       // LED stays ON for 2 seconds
digitalWrite(LED2, LOW);          // turns the LED OFF
}

}


}

void loop() {
  // put your main code here, to run repeatedly:

}

// end of code
