#include<stdio.h>
#include<stdlib.h>
/*
ö�� enum enumeration
��һ���û�������������ͣ�������ģ��űȵ�����
enum color {red,yellow,green};
ʹ�ã�enum color red
ö����������ͨ���������ʹ�ã�Ҫ�õ����ڴ�����������֣�
��Ϊ���Ǿ��ǳ������ţ����ǵ�������int��ֵ���δ�0��n

�Զ�������ö��
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
��ʱNumCOLORSֵΪ3
ö����������ʱ����ָ��ֵ
enum COLOR {RED=1,YELLOW,GREEN = 5};
��ʱYELLOWֵΪ2
*/
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
int main()
{

	int color = -1;
	char *ColorNames[NumCOLORS] = {
		"red","yellow","green"
	};
	char *colorName = NULL;
	printf("������ɫ���\n");
	scanf("%d",&color);
	if(color >= 0 && color < NumCOLORS){
		colorName = ColorNames[color];
	}else {
		colorName = "unknown";
	}
	printf("��ϲ������ɫ��%s\n",colorName);
	return 0;
}
