#include<stdio.h>
/*
	ȫ�ֱ����;�̬���ر���
	��̬���ر�����һ�������ȫ�ֱ���
	ȫ�ֱ�����ȫ�������ڡ�ȫ��������
	���ر����б��������ڡ�����������
	��̬���ر�����ȫ�������ڡ����������� 
*/
int f(void);

int gAll=12;

int main(int argc,char const *argv[])
{
	f();
	f();
	f();
	return 0;
}

int f(void)
{
	static int all = 1;
	printf("in %s all=%d\n", __func__,all);
	all +=2;
	printf("agn in %s all=%d\n", __func__,all);
	return all;
}
