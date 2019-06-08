#include <stdio.h>

int search(int key,int a[],int len)
{
	int ret=-1;
	int i;
	for(i=0;i<len;i++)
	{
		if(key==a[i])
		{
			ret=i;
			break;
		}
	}
	return ret;
}

main()
{
	int a[] = {1,2,4,45,76,23,45,56,9};
	int r = search(4,a,sizeof(a)/sizeof(a[0]));
	printf("%d\n",r);
	
}
