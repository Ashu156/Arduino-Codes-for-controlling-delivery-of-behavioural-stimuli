// Code for dleivering shcok to a rat on a linear track through a custom-made shock-grid.
// The current flowing through the shock-grid was controlled through an ISO-flex stimulation 
// isolation unit (SIU). A LED indicator was usedfor indicating the onset of shock.

#define LED1 8

void setup() {
  // put your setup code here, to run once:

  pinMode(LED1,OUTPUT);

  digitalWrite(LED1,HIGH);
  delay(90000);
  digitalWrite(LED1,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}
