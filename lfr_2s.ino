/*------ Program for Line Follower Robot using Arduino----- */

/*-------defining Inputs------*/
#define LS A1      // left sensor
#define RS A4      // right sensor

/*-------defining Outputs------*/
#define LM1 13       // left motor
#define LM2 12       // left motor
#define RM1 9        // right motor
#define RM2 8        // right motor

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
}

void loop()
{
  
  if(!digitalRead(LS) && !digitalRead(RS))     // Move Forward
  {
    analogWrite(LM1, 120);
    analogWrite(RM1, 120);
  }
  
  if(digitalRead(LS) && !digitalRead(RS))     // Turn right
  {
    analogWrite(LM1, 0);
    analogWrite(RM1, 120);
  }
  
  if(!digitalRead(LS) && digitalRead(RS))     // turn left
  {
    analogWrite(LM1, 120);
    analogWrite(RM1, 0);
  }
  
  if(digitalRead(LS) && digitalRead(RS))     // stop
  {
     analogWrite(LM1, 120);
     analogWrite(RM1, 120);
  }
}
