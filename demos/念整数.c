#include <stdio.h> 
#include <math.h>
main(){
	int a,b,n=0,t,i;
	scanf("%d",&a);
	if(a<0){
		printf("fu ");
		a=-a;
	}
	t=a;
	while(t>=10){
		t/=10;
		n++;
	}
	while(n>=0){
		b=a/pow(10,n);
		switch (b)
		{
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
			case 0:printf("ling");break;
		}
		if(n>0){
			printf(" ");
		}
		i=pow(10,n);
		a=a%i;
		n--;
	}
	return 0;
}
