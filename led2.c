#include <stdio.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();
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
	
	digitalWrite(0,LOW);
	digitalWrite(23,LOW);
	int time=10;
	int flag=1;
	int total=20;
	while(1)
	{
		time=time+flag;
		if(time==20||time==0)
		{
			flag=0-flag;
		}
		int i=0;
		for(;i<3;i++){
		digitalWrite(0,HIGH);
		delay(time);
		digitalWrite(0,LOW);
		delay(20-time);}
	}
	return 0;
}
