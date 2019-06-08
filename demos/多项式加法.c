#include<stdio.h>

main()
{
	int a[150]={0},b[150]={0},c[150]={0},d[150]={0},i,j,k,len1=0,len2=0;
	while(1){
		scanf("%d%d",&a[len1],&b[len1]);
		if(a[len1] == 0)break;
		len1++;
	}
	while(1){
		scanf("%d%d",&c[len2],&d[len2]);
		if(c[len2] == 0)break;
		len2++;
	}
	for(j=0;j<len1;j++)
	{
		for(i=0;i<len2;i++)
		{
			if(a[j] == 0 && c[i] == 0)
			{
				k=b[j]+d[j];
				printf("%d",k);
			}
			else if(a[j] == 1 && c[i] == 1)
			{
				k=b[j]+d[j];
				printf("%dx+",k);
			}
			else if(a[j] == c[i])
			{
				k=b[j]+d[j];
				printf("%dx%d+",k,a[i]);
			}
			else
			{
				
			}
		}
	}
	return 0;
}
