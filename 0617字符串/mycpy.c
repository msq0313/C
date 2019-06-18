#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* mycpy(char *s1,char *s2)
{
	char* ret = s2;
	while(*s2++ = *s1++)
	return ret;
}
int main(void)
{
	char s1[] = "Hello";
	char s2[10];
	printf("%s\n",strcpy(s2,s1));
	printf("%s\n",mycpy(s2,s1));
	printf("%s\n",s2);
	return 0;
}
