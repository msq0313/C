#include<stdio.h>
#include<stdlib.h>
/*
	对于整个结构，可以做赋值、取地址，也可以传递给函数参数
	p1 = (struct point){5,10};相当于p1.x = 5; p1.y = 10;
	p1 = p2; 相当于p1.x = p2.x; p1.y = p2.y; 
*/
/*
	结构指针
	和数组不同，结构变量的名字并不是
	结构变量的地址，必须使用&运算符。 
	struct date *pDate = &today;
*/
struct date{
	int month;
	int day;
	int year;
};

int main(int argc, char const *argv[])
{
	struct date today = {07,02,2019};
	struct date thismonth = {.month = 7,.year = 2019};
	today.month = 07;
	today.day = 02;
	today.year = 2019;
	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	printf("This month is %i-%i-%i.\n",
		thismonth.year,thismonth.month,thismonth.day);
	return 0;
}
