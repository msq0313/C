#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mylen(char s[])
{
	int len = 0;
	while(s[len] != '\0'){
		len++;
	}
	return len;
}
int main(void)
{
	int lenth;
	char s[] = "Hello";
	printf("%d\n",strlen(s));
	printf("%d\n",mylen(s));
}
