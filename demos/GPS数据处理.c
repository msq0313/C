#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
	char gps[100] = "",gpr[] = "$GPRMC",end[] = "END";
	int a,sum=0,i,j,len,t,c=0,h=0,m=0,s=0,flag=0;
	while(1)
	{
		scanf("%s",&gps);
		if(strcmp(gps,end) == 0)//�ж��Ƿ�ΪEND 
		{
			break;
		}
		len=strlen(gps);
		i=0;j=0;
		while(i<len)
		{
			if(gps[i] == ',')
				j++;
			if(j == 2 && gps[i+1] == 'A') 
			{
				flag=1;
				break;
			}
			i++;
		}
		if(strncmp(gps,gpr,6) == 0 && flag == 1)//�ж��Ƿ�Ϊ$GPRMC��� ���Լ��Ƿ��Ѷ�λ 
		{
			sum=0;
			c=0;
			for(j=len-1;gps[j] != '*';j--)//У��ֵת��Ϊ10���ƣ���ֵ��sum 
			{
				if(gps[j]<='9')
	             	t=gps[j]-'0';
	        	else
	             	t=gps[j]-'A'+10;
	        	sum+=t*pow(16,c);
	        	c++;
			}
//	        printf("1 %d\n",sum);
			a=gps[1];
//			printf("%c",gps[18]);
			for(i=2;gps[i] != '*';i++)//��i=2��ʼ����һ��ѭ��Ϊa=gps[1]^gps[2] 
			{
				a=a^gps[i];
			}
//			printf("2 %d\n",a);
			if(sum == a)//���У��ֵ��ȷ��ʱ�䱣���������� 
			{
				i=0;
				while(1)
				{
					if(gps[i] == ',')
					{
						h=(10*((int)gps[i+1]-(int)'0')+(int)gps[i+2]-(int)'0');
						h=(h+8)%24;
						m=(10*((int)gps[i+3]-(int)'0')+(int)gps[i+4]-(int)'0');
						s=(10*((int)gps[i+5]-(int)'0')+(int)gps[i+6]-(int)'0');
						break;
					}
					i++;
				}	
//				h=(10*((int)gps[7]-(int)'0')+(int)gps[8]-(int)'0');
//				h=(h+8)%24;
//				m=(10*((int)gps[9]-(int)'0')+(int)gps[10]-(int)'0');
//				s=(10*((int)gps[11]-(int)'0')+(int)gps[12]-(int)'0');
			}
		}		
	}
//	for(i=0;i<k;i++)//��� 
//	{
		if(h<10) printf("0");
		printf("%d:",h);
		if(m<10) printf("0");
		printf("%d:",m);
		if(s<10) printf("0");
		printf("%d",s);
//	}
	
	return 0;
}
