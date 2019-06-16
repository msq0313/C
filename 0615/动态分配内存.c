#include <stdio.h>
#include <stdlib.h>
main()
{
	int i = 0;
	void *p = 0;
	while(p = malloc(1024 * 1024 * 1024)){
		i++;
	}
	printf("∑÷≈‰¡À%dGø’º‰" , i);
	free(p);

}
