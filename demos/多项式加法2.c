#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[220]={0},b[220]={0},i,j,k=0,len=0,t1=0,t2=0,sum=0;
	while(scanf("%d%d\n",&a[len],&b[len]))
	{
		len++;
	}
	for(j=0;j<len-1;j++)
	{
		for(i=j;i<len;i++)
		{
			if(a[i]>a[j]){
				t1=a[j];
				a[j]=a[i];
				a[i]=t1;
				
				t2=b[j];
				b[j]=b[i];
				b[i]=t2;
			}
		}
	}
//	for(i=0;i<len;i++)
//	{
//		printf("%d ",a[i]);
//	}
	i=0;
	while(i<len-1)
	{
		if(a[i] == 0 && a[i+1] == 0)
		{
			sum=b[i]+b[i+1];
			if(sum != 0)
			{
				if(i !=0 )
				{
					if(sum > 0)printf("+");
				}
				printf("%d",sum);
			}
			i++;
		}
		else if(a[i] == 1 && a[i+1] == 1)
		{
			sum=b[i]+b[i+1];
			if(sum != 0)
			{
				if(i !=0 )
				{
					if(sum > 0)printf("+");
				}
				printf("%dx",sum);
			}
			i+=2;	
		}
		else if(a[i] == 1)
		{
			sum=b[i];
			if(sum != 0)
			{
				if(i !=0 )
				{
					if(sum > 0)printf("+");
				}
				printf("%dx",sum);	
			}
			i++;
		}
		else if(a[i] == a[i+1])
		{
			sum=b[i]+b[i+1];
			if(sum != 0)
			{
				if(i !=0 )
				{
					if(sum > 0)printf("+");
				}
				printf("%dx%d",sum,a[i]);	
			}
			i+=2;
		}
		else
		{
			sum=b[i];
			if(sum != 0)
			{
				if(i !=0 )
				{
					if(sum > 0)printf("+");
				}
				printf("%dx%d",sum,a[i]);
			}
			i++;
		}
	}
	return 0;
}
