int buttonPin = 12;

char donnees[20];
byte i = 0;

void setup() {
	Serial.begin(9600);
	pinMode(buttonPin, INPUT);
}

void loop() {
  
	char data = 0;
	int sizebuffer = 0;
	
	sizebuffer = Serial.available();
	
	while (sizebuffer > 0) {
		data = Serial.read();
		
		donnees[i] = data;
    i++;
    donnees[i] = '\0';
		

		if (strcmp(donnees,"A")  == 0) {
        for (int i=0;i<19;i++) {
            donnees[i]=0;
        }
        i=0;
        
        tone(8, 2000, 500);
        delay(1000); //500 + 500
        tone(8, 2000, 1500);
		  
    }
		
		  //tone(buttonPin, 550);
    	digitalWrite(buttonPin, HIGH);

  		sizebuffer = Serial.available();
  	}
}
