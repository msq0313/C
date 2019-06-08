#include <stdio.h>

int search(int k,int a[],int len)
{
	int ret=-1;
	int left = 0;
	int right = len-1;
	while(right >= left)
	{
		int mid = (left+right)/2;
		if(a[mid] == k)
		{
			ret=mid;
			break;
		}else if(a[mid]>k)
		{
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	return ret;
}

main()
{
	int k=56;
	int a[]={3,5,7,9,10,56,76,99};
	int r = search(k,a,sizeof(a)/sizeof(a[0]));
	printf("%d\n",r);
	
}
