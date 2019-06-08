#include<stdio.h>

main() 
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		printf("%d",i);
		if(i%2==1&&i<n-1)
 		printf(" ");
	}
	
	return 0;
}
