#include <stdio.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();
	
/*	pinMode(9,OUTPUT);//r
	pinMode(7,OUTPUT);//g
	pinMode(0,OUTPUT);//b
	pinMode(8,OUTPUT);//l1
	pinMode(1,OUTPUT);
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(21,OUTPUT);//l8
	
	
	digitalWrite(9,HIGH);
	digitalWrite(0,HIGH);
	digitalWrite(7,HIGH);
	while(1)
	{
		digitalWrite(8,HIGH);
		digitalWrite(1,HIGH);
		digitalWrite(2,HIGH);
		digitalWrite(3,HIGH);
		digitalWrite(4,HIGH);
		digitalWrite(5,HIGH);
		digitalWrite(6,HIGH);
		digitalWrite(21,HIGH);
		delay(1000);
		digitalWrite(21,HIGH);
		digitalWrite(8,LOW);
		digitalWrite(7,LOW);
		digitalWrite(9,HIGH);
		digitalWrite(0,HIGH);
		delay(100);
		digitalWrite(8,HIGH);
		digitalWrite(1,LOW);
		digitalWrite(7,HIGH);
		digitalWrite(9,LOW);
		digitalWrite(0,HIGH);
		delay(100);
		digitalWrite(1,HIGH);
		digitalWrite(2,LOW);
		digitalWrite(7,LOW);
		digitalWrite(9,LOW);
		digitalWrite(0,HIGH);
		delay(100);
		digitalWrite(2,HIGH);
		digitalWrite(3,LOW);
		digitalWrite(7,HIGH);
		digitalWrite(9,HIGH);
		digitalWrite(0,LOW);
		delay(100);
		digitalWrite(3,HIGH);
		digitalWrite(4,LOW);
		digitalWrite(7,LOW);
		digitalWrite(9,HIGH);
		digitalWrite(0,LOW);
		delay(100);
		digitalWrite(4,HIGH);
		digitalWrite(5,LOW);
		digitalWrite(7,HIGH);
		digitalWrite(9,LOW);
		digitalWrite(0,LOW);
		delay(100);
		digitalWrite(5,HIGH);
		digitalWrite(6,LOW);
		digitalWrite(7,LOW);
		digitalWrite(9,LOW);
		digitalWrite(0,LOW);
		delay(100);
		digitalWrite(6,HIGH);
		digitalWrite(21,LOW);
		digitalWrite(7,LOW);
		digitalWrite(9,HIGH);
		digitalWrite(0,HIGH);
		delay(100);

		
	}
*/
	pinMode(0,OUTPUT);//l0
	pinMode(1,OUTPUT);
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);//l7
	pinMode(21,OUTPUT);//R
	pinMode(22,OUTPUT);//G
	pinMode(23,OUTPUT);//B
	
	digitalWrite(21,HIGH);
	digitalWrite(22,HIGH);
	digitalWrite(23,HIGH);
	
	digitalWrite(0,HIGH);
	digitalWrite(1,HIGH);
	digitalWrite(2,HIGH);
	digitalWrite(3,HIGH);
	digitalWrite(4,HIGH);
	digitalWrite(5,HIGH);
	digitalWrite(6,HIGH);
	digitalWrite(7,HIGH);
	
	int colorsFlag=0;
	
	while(1)
	{
		int i=0;
		for(;i<8;i++){
			colorsFlag=colorsFlag+1;
			digitalWrite(i,LOW);
			digitalWrite(colorsFlag%3+21,LOW);
			delay(500);
			digitalWrite(i,HIGH);
			digitalWrite(colorsFlag%3+21,HIGH);
			if(colorsFlag==300){
				colorsFlag=1;
				}
			}
	}
	

	
	return 0;
}
