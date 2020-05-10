int buttonPin= 12;
int var = 0;



void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}


void loop(){

  int buttonState = digitalRead(buttonPin);


  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    var = 1;
  }
  
  if(buttonState == LOW && var == 1){
    Serial.println("appui sur le bouton");
    var = 0;
  }
  
}
