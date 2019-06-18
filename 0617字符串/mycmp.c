#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mycmp(char *s1,char *s2)
{
	int i = 0;
	while(*s1 == *s2 && *s1 != '\0'){
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
int main(void)
{
	char s1[] = "aBc";
	char s2[] = "abc ";
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",mycmp(s1,s2));
	return 0;
}
