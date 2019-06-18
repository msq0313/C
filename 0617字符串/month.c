#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char *a[] = {
	"January","February","March","April","May",
	"June","July","August","September","October",
	"November","December"
	};
	int month;
	scanf("%d",&month);
	if(month >= 1 && month <=12)
		printf("%s",a[month-1]);
	else
		printf("不是正确月份数");
}
