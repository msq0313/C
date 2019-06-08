#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[101]={0},b[101]={0},ret=0,i,j,sum,pi,num,max,f=0;
	for(i=100;i>-1;i--)
	{
		scanf("%d%d",&pi,&num);
		if(pi == 0) ret++;
		if(max < pi) max=pi;
		if(a[pi] == 0)
		{
			a[pi]=num;
		}
		else if(a[pi] != 0)
		{
			b[pi]=num;
		}
		if(ret == 2)break;
	}
//	for(i=100;i>-1;i--)
//	{
//		if(a[i] != 0)
//		{
//			printf("%d ",i);
//		}
//		if(b[i] != 0)
//		{
//			printf("%d ",i);
//		}
//	}
	for(i=max;i>-1;i--)
	{
		sum=a[i]+b[i];
		if(sum == 0 && i == 0)printf("0");
		if(sum != 0)
		{
			if(sum>0 && f == 1 ) printf("+");
			if(i == 0)
			{
				printf("%d",sum);
				f = 1;
			}
			else if(i == 1)
			{
				if(sum == 1) printf("x");
				else printf("%dx",sum);
				f = 1;
			}
			else
			{
				if(sum == 1) printf("x%d",i);
				else printf("%dx%d",sum,i);
				f = 1;
			}
		}
	}
	return 0;
}
