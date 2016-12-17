//This .ino file provides source code for an ATtiny controlling an externally powered TEC
//via a 10k potentiometer.

int val;
int pot=A1;
int tec=1;

void setup(){
	pinMode(tec,OUTPUT);
}
void loop(){
	val=analogRead(pot);
	val=map(val,0,1023,0,126:);
	analogWrite(tec,val);
}

