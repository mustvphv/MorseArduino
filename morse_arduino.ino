
int buttonPin= 12;

int delay_meme_mot_ou_nouveau_mot = 0;
int tone_time = 0;

void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

  delay_meme_mot_ou_nouveau_mot = 0;
  tone_time = 0;
}


void loop(){

  int buttonState = digitalRead(buttonPin);
  if (buttonState == 1){
      tone(8, 100, 100);
  }
  
  char lettre_byte;
  
  if (Serial.available() > 0) {
    lettre_byte = Serial.read();
    Serial.print("vous avez écrit: ");
    Serial.println(lettre_byte);
  }
  
  
  
  if (lettre_byte == 'a' || lettre_byte == 'b' || lettre_byte == 'c' || lettre_byte == 'd' || lettre_byte == 'e' || lettre_byte == 'f'){
    
    /*Serial.println("delay_meme_mot_ou_nouveau_mot =");
    Serial.println(delay_meme_mot_ou_nouveau_mot);*/
    
    if(delay_meme_mot_ou_nouveau_mot == 3500){
      int val1 = 3500 + tone_time;
      delay(val1);
      /*Serial.println("3500AAAAAAAAAAAAAAAA");
      Serial.println("tone_time=");
      Serial.print(tone_time);*/
    }
    if(delay_meme_mot_ou_nouveau_mot == 1500){
      int val2 = 1500 + tone_time;
      delay(val2);
      /*Serial.println("1500BBBBBBBBBBBBBBBB");
      Serial.println("tone_time=");
      Serial.print(tone_time);*/
    }
    
  
    if (lettre_byte == 'a'){
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 1500);
    
        tone_time = 2000; //500 + 1500
    }
    
    if (lettre_byte == 'b'){
        tone(8, 2000, 1500);
        delay(2000); //500 + 1500
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 500);
        
        tone_time = 3000;
    }
    
    if (lettre_byte == 'c'){
        tone(8, 2000, 1500);
        delay(2000); //500 + 1500
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 1500);
        delay(2000); //500 + 1500
        tone(8, 2000, 500);
        delay(1000); //500 + 500

      
        tone_time = 4000;
    }
    
    if (lettre_byte == 'd'){
        tone(8, 2000, 1500);
        delay(2000); //500 + 1500
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 500);

      
        tone_time = 2500;
    }
    
    
    if (lettre_byte == 'e'){
        tone(8, 2000, 500);

        tone_time = 500;
    }
    
    if (lettre_byte == 'f'){
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 1500);
        delay(2000); //500 + 1500
        tone(8, 2000, 500);
        delay(1000); //500 + 500



      
        tone_time = 3000;
    }
    
    
    
    
    
    delay_meme_mot_ou_nouveau_mot = 1500;
    
/*    Serial.println("delay_meme_mot_ou_nouveau_mot =");
    Serial.println(delay_meme_mot_ou_nouveau_mot);*/
    
    
  }
  

  if (lettre_byte == ' '){
    
    /*Serial.println("delay_meme_mot_ou_nouveau_mot =");
    Serial.println(delay_meme_mot_ou_nouveau_mot);
    Serial.print("TONETIIIIME: ");
    Serial.println(tone_time);*/
    
    delay_meme_mot_ou_nouveau_mot = 3500;
    
    /*Serial.println("delay_meme_mot_ou_nouveau_mot =");
    Serial.println(delay_meme_mot_ou_nouveau_mot);*/
  }
  
  
  

  
}
