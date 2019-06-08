#include<stdio.h>
main()
{
	int a[100][100]={0},n,b[100]={0},c[100]={0},imin,jmax,i,j,flag=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(j == 0) jmax=a[i][j];
			if(j>0 && a[i][j]>jmax)
			{
				jmax=a[i][j];
			}
		}
		b[i]=jmax;
//		printf("%d\n",b[i]);
	}
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
//			if(a[i][j] == b[i] && b[i] == c[j])
//			{
//				printf("%d %d",i,j);
//				flag=0;
//			}
			if(i == 0) imin=a[i][j];
			if(i>0 && a[i][j]<imin)
			{
				imin=a[i][j];
			}
		}
		c[j]=imin;
//		printf("%d\n",c[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(a[i][j] == b[i] && b[i] == c[j])
		{
			printf("%d %d",i,j);
			flag=0;
		}
	}
	if(flag)
	{
		printf("NO");
	}
	return 0;
}
