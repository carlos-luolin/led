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
	
	softPwmCreate(21,0,100);
	softPwmCreate(22,0,100);
	softPwmCreate(23,0,100);
	
	int i=0;
		int i_r=0,i_g=0,i_b=0;
	while (1){
		
		i=i+1;
		if((i%2)==0){
			i_r=i_r+1;
			}
		if(i%3==0){
			i_g=i_g+1;
			}
		if(i%5==0){
			i_b=i_b+1;
			}
		if(i_r==255){
			i_r=0;
			}
		if(i_g==255){
			i_g=0;
			}
		if(i_b==255){
			i_b=0;
			}
		digitalWrite(0,LOW);
		softPwmWrite(21,i_r);
		softPwmWrite(22,i_g);
		softPwmWrite(23,i_b);
		delay(10);

	}
	return 0;
}
