#include<stdio.h>
#include<stdlib.h>
void minmax(int a[] , int len , int *min , int *max)
{
	int i;
	*min = a[0];
	*max = a[0];
	for(i = 1 ; i < len ; i++){
		if(a[i] < *min)
			*min = a[i];
		if(a[i] > *max)
			*max = a[i];
	}
}
main(void)
{
	int a[] = {1,3,5,35,75,34,76,85};
	int min , max;
	minmax(a , sizeof(a)/sizeof(a[0]) , &min , &max);
	printf("最小值为%d\n最大值为%d",min,max);
}	