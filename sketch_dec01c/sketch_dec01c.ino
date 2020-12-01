#inciude <Servo.h>
int a=0
Servo myservo; //建立servo物件,控制伺服馬達

void setup()
{
  Servo.attach(3); // 連接數位腳位9,伺服馬達的訊號線
  pinMode(4,INPUT);
}

void loop()
 {
  if (digitalread(4)==0)
  { while(digitalRead==0);
  a=(a+1)%4;}
  switch(a)
{

}
myservo.write(120);
 }
