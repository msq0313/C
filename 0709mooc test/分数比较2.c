#include <stdio.h>

int main()
{
	int a,b,c,d;
	long long s1,s2;
	scanf("%d/%d %d/%d",&a,&b,&c,&d);
	s1 = a*d;
	s2 = b*c;
	if(s1 - s2 > 0) 
		printf("%d/%d > %d/%d",a,b,c,d);
	else if(s1 - s2 == 0)
		printf("%d/%d = %d/%d",a,b,c,d);
	else if(s1 - s2 < 0)
		printf("%d/%d < %d/%d",a,b,c,d);
	return 0;
}
