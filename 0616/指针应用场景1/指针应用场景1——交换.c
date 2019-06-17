#include <stdio.h>
#include <stdlib.h>

void swap(int *pa ,int *pb);

main(void)
{
	int a = 10 , b = 20;
	swap(&a,&b);
	printf("%d %d\n",a,b);
}
void swap(int *pa ,int *pb){
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}