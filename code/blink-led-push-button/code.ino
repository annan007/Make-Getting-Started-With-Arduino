// Turn on the LED while the button is pressed

const int LED = 13; // LED connected to digital pin 13
const int BUTTON = 7; // the input pin where the pushbutton is connected
int val = 0; //val will be used to store the state of the input pin

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); // sets the digital pin as output
  pinMode(BUTTON, INPUT); //set button as input
}

void loop() {
  // put your main code here, to run repeatedly:

  val = digitalRead(BUTTON);

  //check whether the input is HIGH ( button is pressed )
  if(val == HIGH){
    digitalWrite(LED, HIGH); //turn led ON
  }
  else{
    digitalWrite(LED, LOW); //turn led OFF
  }

}
