#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int a,n=1,x=0,sum=0,i=0;
	scanf("%d",&a);
	while(a!=0)
	{
		if(a%10%2==0&&n%2==0||a%10%2==1&&n%2==1){
			x=x*10+1;
			i=1;
		}else{
			x=x*10;
			i=0;
		}
		a/=10;
		sum+=pow(2,(n-1))*i;
		n++;
	}
	printf("%d",sum);
	return 0;
}

