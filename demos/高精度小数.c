#include <stdio.h>
main(){
	int a,b,i;
	int t;
	scanf("%d/%d",&a,&b);
	printf("0.");
	for(i=0;i<200;i++){
		a*=10;
		t=a/b;
		a%=b;

		printf("%d",t);
		if(a==0)break;		
	}
	return 0;

}
