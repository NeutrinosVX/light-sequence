void setup() 
{ 
  for(int i = 6; i <= 11; i++)
  {
  pinMode(i, OUTPUT);//让6到11号接口输出电频
  } 
}
void loop() {
       digitalWrite(6,LOW);
       digitalWrite(7,HIGH);
       delay(200);

       digitalWrite(7,LOW);
       digitalWrite(8,HIGH);
       delay(200);

       digitalWrite(8,LOW);
       digitalWrite(9,HIGH);
       delay(200);

       digitalWrite(9,LOW);
       digitalWrite(10,HIGH);
       delay(200);

       digitalWrite(10,LOW);
       digitalWrite(11,HIGH);
       delay(200);

       digitalWrite(11,LOW);
       digitalWrite(6,HIGH);
       delay(200);
}
