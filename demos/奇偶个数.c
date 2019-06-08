#include <stdio.h>
#include <stdlib.h>
main()
{
	int i=0,ji=0,ou=0;
	while(1){
		scanf("%d",&i);
		if(i==-1){
			break;
		}
		else if(i%2==0){
			ou++;
		}else{
			ji++;
		}
	}
	printf("%d %d",ji,ou);

}
