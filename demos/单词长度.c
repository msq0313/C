#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char a[100];
	int i=0,len=0;
	while(a[len]!= '.')
	{
		scanf("%s",&a);
		if(a[0] == '.') break;
//		printf("%s",a);
		len=strlen(a);
		if(a[len-1] == '.')
		{
			len--;
			printf("%d",len);
		}
		else
		printf("%d ",len);
	}
	
	return 0;
}
