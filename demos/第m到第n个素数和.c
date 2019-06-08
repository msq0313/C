#include <stdio.h> 
main(){
	int n,m,i=2,j,t,z=0,sum=0;
	scanf("%d%d",&n,&m);
	while(z!=m){
		t=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
			t++;
			}
		}
		if(t==2){
			z++;
			if(z>=n&&z<=m){
			sum+=i;
			}
		}
		i++;
	}
	printf("%d",sum);
	return 0;
}
