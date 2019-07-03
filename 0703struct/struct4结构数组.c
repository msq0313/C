#include<stdio.h>
typedef struct {
	int hour;
	int minutes;
	int seconds;
}time;

void main()
{
	time testTimes[5] = {
		{11,59,59},{12,0,0},{1,29,59},
		{23,59,59},{19,12,27}
	};
	int i;
	for(i = 0; i < 5; i++){
		printf("Time is %.2i:%.2i:%.2i\n",
			testTimes[i].hour,
			testTimes[i].minutes,
			testTimes[i].seconds);
	}
}
