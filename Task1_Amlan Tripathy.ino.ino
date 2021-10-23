//declaring the pins to be connected to led
int north[]={1,2,3};
int east[]={4,5,6};
int south[]={7,8,9};
int west[]={10,11,12};
int red=10000;
int yellow=8000;
void setup() {
  // put your setup code here, to run once:
int i;
//initialing the pins to be output pins
for(i=0;i<3;i++)
  pinMode(north[i],OUTPUT);
  pinMode(east[i],OUTPUT);
  pinMode(south[i],OUTPUT);
  pinMode(west[i],OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //making the green in north and red led in other direction on
  digitalWrite(north[2],HIGH);
  digitalWrite(east[0],HIGH);
  digitalWrite(south[0],HIGH);
  digitalWrite(west[0],HIGH);
  delay(red);
  //making the yellow led in north and east direction on 
  digitalWrite(north[2],LOW);
  digitalWrite(north[1],HIGH);
  digitalWrite(east[0],LOW);
  digitalWrite(east[1],HIGH);
  delay(yellow);
  //putting off the yellow led that was made on
  digitalWrite(north[1],LOW);
  digitalWrite(east[1],LOW);
 //making the green led in east and red led in other direction on
  digitalWrite(north[0],HIGH);
  digitalWrite(east[2],HIGH);
  digitalWrite(south[0],HIGH);
  digitalWrite(west[0],HIGH);
  delay(red);
 //making the yellow led in east and south direction on
  digitalWrite(east[2],LOW);
  digitalWrite(east[1],HIGH);
  digitalWrite(south[0],LOW);
  digitalWrite(south[1],HIGH);
  delay(yellow);
 //switching off the yellow led
  digitalWrite(east[1],LOW);
  digitalWrite(south[1],LOW);
 //switching on the green led in south and red led in all other direction
  digitalWrite(north[0],HIGH);
  digitalWrite(east[0],HIGH);
  digitalWrite(south[2],HIGH);
  digitalWrite(west[0],HIGH);
  delay(red);
 //switching on the yellow led in south and west direction
  digitalWrite(south[2],LOW);
  digitalWrite(south[1],HIGH);
  digitalWrite(west[0],LOW);
  digitalWrite(west[1],HIGH);
  delay(yellow);
 //switching off the yellow led
  digitalWrite(south[1],LOW);
  digitalWrite(west[1],LOW);
 //switching on the green led in west and red led in all other direction on 
  digitalWrite(north[0],HIGH);
  digitalWrite(east[0],HIGH);
  digitalWrite(south[0],HIGH);
  digitalWrite(west[2],HIGH);
  delay(red);
 //switching on the yellow led in north and west
  digitalWrite(north[0],LOW);
  digitalWrite(north[1],HIGH);
  digitalWrite(west[2],LOW);
  digitalWrite(west[1],HIGH);
  delay(yellow);
 //switching off the yellow led
  digitalWrite(north[1],LOW);
  digitalWrite(west[1],LOW);
  
  

}
