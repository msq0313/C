#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* mycat(char *s1,char *s2)
{
	char* ret = s1;
	while(*s1)
		*s1++;
	while(*s2)
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return ret;
}
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World";
	printf("%s\n",mycat(s1,s2));
	return 0;
}
