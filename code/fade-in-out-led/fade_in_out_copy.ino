const int LED = 9; // LED connected to digital pin 13
int i = 0; // we will use this to count up and down

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); // sets the digital pin as output
}

void loop() {
  // put your main code here, to run repeatedly:

  for(i=0;i<255;i++){
    analogWrite(LED, i); // set the LED brightness
    delay(10); // wait for 10s because analogWrite is instant 
               // and we wouldn't see any change
  }


  for(i=255; i> 0 ;i--){
    analogWrite(LED, i);
    delay(10);
  }
}
