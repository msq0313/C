#include<stdio.h>

main() 
{

	int utc,bjt,shi,fen;
	scanf("%d",&bjt);
	shi=bjt/100;
	fen=bjt%100;
	if(shi>=8)
		shi-=8;
	else
		shi+=16;
	utc=shi*100+fen;
	printf("%d",utc);
	
	return 0;
}
