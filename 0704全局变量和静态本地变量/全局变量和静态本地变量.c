#include<stdio.h>
/*
	全局变量和静态本地变量
	静态本地变量是一种特殊的全局变量
	全局变量有全局生存期、全局作用域
	本地变量有本地生存期、本地作用域
	静态本地变量有全局生存期、本地作用域 
*/
int f(void);

int gAll=12;

int main(int argc,char const *argv[])
{
	f();
	f();
	f();
	return 0;
}

int f(void)
{
	static int all = 1;
	printf("in %s all=%d\n", __func__,all);
	all +=2;
	printf("agn in %s all=%d\n", __func__,all);
	return all;
}
