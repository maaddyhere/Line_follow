int Sensor_L=5;
int Sensor_C=6;
int Sensor_R=7; 

int L_motorF=8;
int L_motorB=9;
int L_motorP=3;

int R_motorF=11;
int R_motorB=12;
int R_motorP=5;

int speed=150;

void setup()
{
  pinMode(Sensor_L,INPUT);
  pinMode(Sensor_C,INPUT);
  pinMode(Sensor_R,INPUT);

  pinMode(L_motorF,OUTPUT); 
  pinMode(L_motorP,OUTPUT);
  pinMode(L_motorB,OUTPUT);
  pinMode(R_motorF,OUTPUT);
  pinMode(R_motorP,OUTPUT);
  pinMode(R_motorB,OUTPUT);
}
void loop()
{

  int LS= digitalRead(Sensor_L);
  int CS= digitalRead(Sensor_C);
  int RS= digitalRead(Sensor_R);

  if(LS==1,CS==1,RS==1)
  {
    forward();
  }
  if(LS==1,CS==1,RS==0)
  {
    left();
  }
  if(LS==1,CS==0,RS==0)
  {
    left();
  }
  if(LS==0,CS==1,RS==1)
  {
    right();
  }
  if(LS==0,CS==1,RS==0)
  {
    forward();
  }
  if(LS==0,CS==0,RS==1)
  {
    right();

  }
  if(LS==0,CS==0,RS==0)
  {
    stop();
  }
}
void forward()
{
  digitalWrite(L_motorF,HIGH);
  digitalWrite(L_motorB,LOW);
  analogWrite(3,speed);
  digitalWrite(R_motorF,HIGH);
  digitalWrite(R_motorB,LOW);
  analogWrite(3,speed);
}
void backward()
{
  digitalWrite(L_motorF,LOW);
  digitalWrite(L_motorB,HIGH);
  analogWrite(3,speed);
  digitalWrite(R_motorF,LOW);
  digitalWrite(R_motorB,HIGH);
  analogWrite(3,speed);
}
void stop()
{
  digitalWrite(L_motorF,LOW);
  digitalWrite(L_motorB,LOW);
  analogWrite(3,speed);
  digitalWrite(R_motorF,LOW);
  digitalWrite(R_motorB,LOW);
  analogWrite(3,speed);
}
void left()
{
  digitalWrite(L_motorF,LOW);
  digitalWrite(L_motorB,LOW);
  analogWrite(3,speed);
  digitalWrite(R_motorF,HIGH);
  digitalWrite(R_motorB,LOW);
  analogWrite(3,speed);
}
void right()
{
  digitalWrite(L_motorF,HIGH);
  digitalWrite(L_motorB,LOW);
  analogWrite(3,speed);
  digitalWrite(R_motorF,LOW);
  digitalWrite(R_motorB,LOW);
  analogWrite(3,speed);
}