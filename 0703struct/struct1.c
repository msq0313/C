#include<stdio.h>
#include<stdlib.h>
/*
	���������ṹ����������ֵ��ȡ��ַ��Ҳ���Դ��ݸ���������
	p1 = (struct point){5,10};�൱��p1.x = 5; p1.y = 10;
	p1 = p2; �൱��p1.x = p2.x; p1.y = p2.y; 
*/
/*
	�ṹָ��
	�����鲻ͬ���ṹ���������ֲ�����
	�ṹ�����ĵ�ַ������ʹ��&������� 
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
