int reading=0;
int x=0;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,INPUT);

}

void loop() {
  reading=digitalRead(8);
  if(reading==1){x++;
                 if(x==1){
                   digitalWrite(12,HIGH);}
                 else if  (x==2){
                   digitalWrite(11,HIGH);}
                 else if ( x==3){
                   digitalWrite(10,HIGH);}
 
  else{x=0;
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
       x=0;
      }
   delay(250);
                
                }  
  

}