#include <stdio.h>
#include <wiringPi.h>
#include <sys/time.h>

int main()
{
	
	wiringPiSetup();
	
	pinMode(8,OUTPUT);
	pinMode(9,INPUT);
	
	struct timeval start,end;
	long time_1=0,time_2=0;
	int s=0;
	
	
	while(1)
	{
		digitalWrite(8,LOW);
		digitalWrite(9,LOW);
		digitalWrite(8,HIGH);
		delayMicroseconds(10);
		digitalWrite(8,LOW);
	
		int s=0;

		while(1)
		{
			s = digitalRead(9);
			if (s>0)
			{
				//time_1=time(time_t*);
				printf("start\n");
				break;
			}
		}
		gettimeofday(&start,NULL);
		
		while (1)
		{
		
			s = digitalRead(9);
			if(s==0)
			{
				//time_2=time(time_t*);
				printf("end\n");
				break;	
			}
		}
		gettimeofday(&end,NULL);
		time_1=start.tv_sec * 1000000 + start.tv_usec;
		time_2=end.tv_sec * 1000000 + end.tv_usec;
		
		float dis = (float)(time_2-time_1)/1000000*34000/2;
		delay(1000);
		printf("%fcm\n",dis);
	}
	return 0;
}
