
#include<stdio.h>


int main()


{


    int a[] = {1, 2, 3, 4};

    int *p = &a[0];

    int i = p[1];

    printf("%d\n",i);

    printf("%d\n",*p);

    return 0;

}e
