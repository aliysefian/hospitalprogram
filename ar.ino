/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int room1_ready=2;
int room1_in_progress=4;
int room1_busy=3;
byte room1_status=0;
int room1_dec1=8;
int room1_dec2=9;


// the setup function runs once when you press reset or power the board
void setup() {
	Serial.println("eeee");

  // initialize digital pin LED_BUILTIN as an output.
//   pinMode(LED_BUILTIN, OUTPUT);
  pinMode(room1_busy, INPUT);
  pinMode(room1_in_progress, INPUT);
  pinMode(room1_dec1, OUTPUT);
  pinMode(room1_dec2, OUTPUT);

  

  	// Serial.begin(9600);


}

// the loop function runs over and over again forever
void loop() {
    	// Serial.println("ali");

//   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
//   delay(1000);                       // wait for a second
//   digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//   digitalWrite(LED_BUILTIN,LOW)
  if (digitalRead(room1_ready)==HIGH){
      	// Serial.println(" ready HIIIIII");
        digitalWrite(room1_dec1,LOW);
        digitalWrite(room1_dec2,LOW);

        

  }
  else if(digitalRead(room1_busy)==HIGH)
  {
      	// Serial.println("busy High ");
        digitalWrite(room1_dec1,LOW);
        digitalWrite(room1_dec2,HIGH);

  }
  else
  {
      	// Serial.println("free alllllllll ");
        digitalWrite(room1_dec1,HIGH);
        digitalWrite(room1_dec2,LOW);
  }
  
//     if (digitalRead(room1_busy)==HIGH){
//       	Serial.println(" busy HIIIIII");

//   }
//   else
//   {
//       	Serial.println("busy lowwww ");
//   }
  
  delay(100);                       // wait for a second
}