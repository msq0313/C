#include <stdio.h> 
main(){
	int a,b,t;
	scanf("%d%d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d",a);
	return 0;
}
