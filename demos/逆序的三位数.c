#include<stdio.h>

main()
{
	int shu1,shu2,ge,shi,bai;
	scanf("%d",&shu1);
	bai=shu1/100;
	shi=shu1/10%10;
	ge=shu1%10;
	shu2=ge*100+shi*10+bai;
	printf("%d",shu2);
	
}
