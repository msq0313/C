#include<stdio.h>
#include<stdlib.h>
int divide(int a , int b , int *result)
{
	int ret = 1;
	if(b == 0)
		ret = 0;
	else
		*result = a / b;
	return ret;
}
int main(void)
{
	int a = 5 ,b =2;
	int result ;
    if( divide(a , b , &result) ){
		printf("%d/%d=%d\n",a,b,result);
	}
	return 0;
}