#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,number,xmax,ymax,xmin,ymin;
	int *p,a[0];
	scanf("%d\n",&n);
	p = (int*)malloc(sizeof(int)*n*2);
	for(i = 0; i < 2 * n ; i++){
		scanf("%d",&p[i]);
	}
	xmax = xmin = p[0];
	ymax = ymin = p[1];
	for(i = 2; i < 2 * n - 1; i+=2){
		if(p[i] > xmax)
		xmax = p[i];
		if(p[i] < xmin)
		xmin = p[i];
	}
	for(i = 3; i < 2 * n; i+=2){
		if(p[i] > ymax)
		ymax = p[i];
		if(p[i] < ymin)
		ymin = p[i];
	}
	printf("%d %d %d %d",xmin,ymin,xmax,ymax);
	printf("\n");
	free(p);
	return 0;
}
