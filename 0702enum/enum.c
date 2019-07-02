#include<stdio.h>
#include<stdlib.h>
/*
枚举 enum enumeration
是一种用户定义的数据类型，有意义的，排比的名字
enum color {red,yellow,green};
使用：enum color red
枚举类型名字通常并不真的使用，要用的是在大括号里的名字，
因为他们就是常量符号，他们的类型是int，值依次从0到n

自动计数的枚举
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
此时NumCOLORS值为3
枚举量，声明时可以指定值
enum COLOR {RED=1,YELLOW,GREEN = 5};
此时YELLOW值为2
*/
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
int main()
{

	int color = -1;
	char *ColorNames[NumCOLORS] = {
		"red","yellow","green"
	};
	char *colorName = NULL;
	printf("输入颜色序号\n");
	scanf("%d",&color);
	if(color >= 0 && color < NumCOLORS){
		colorName = ColorNames[color];
	}else {
		colorName = "unknown";
	}
	printf("你喜欢的颜色是%s\n",colorName);
	return 0;
}
