#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i = 0;
	strcpy(s, "abcd");
	putchar(TOUPPER(s[++i]));
	return 0;
}

/*
putchar(TOUPPER(s[++i]));
宏展开的结果是：
putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])) );
到输出时，引用了三次s[++i]
所以，就是输出D
*/
