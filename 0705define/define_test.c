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
��չ���Ľ���ǣ�
putchar(('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i])) );
�����ʱ������������s[++i]
���ԣ��������D
*/
