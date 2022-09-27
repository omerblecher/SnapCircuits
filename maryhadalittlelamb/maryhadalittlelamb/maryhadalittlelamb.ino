//A sketch to demonstrate the tone() function

//Specify digital pin on the Arduino that the positive lead of piezo buzzer is attached.
int spkr = 10;
int button1 = 5;
int button2 = 6;
int button3 = 7;
int button4 = 8;
int button5 = 9;

void setup() {
pinMode(button1, INPUT);
pinMode(button2, INPUT);
pinMode(button3, INPUT);
pinMode(button4, INPUT);
pinMode(button5, INPUT);


}//close setup

void loop() {

  /*Tone needs 2 arguments, but can take three
    1) Pin#
    2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
    3) Duration - how long teh tone plays
  */

tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 783.99,300); //G5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 987.77,500); //B5
  delay(1000);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 880.00,500); //A5
  delay(1000);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 987.77,500); //B5
  delay(1000);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 783.99,300); //G5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 987.77,300); //B5
  delay(600);
tone(spkr, 880.00,300); //A5
  delay(600);
tone(spkr, 783.99,600); //G5
  delay(1000);

}
