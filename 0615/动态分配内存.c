#include <stdio.h>
#include <stdlib.h>
/*
	void* malloc(size_t size);
	��malloc����Ŀռ�Ĵ�С�����ֽ�Ϊ��λ��
	���صĽ����void*����Ҫ����ת��Ϊ��Ҫ������
	(int*)malloc(n*sizeof(int)) 
*/
main()
{
	int i = 0;
	void *p = 0;
	while(p = malloc(1024 * 1024 * 1024)){
		i++;
	}
	printf("������%dG�ռ�" , i);
	free(p);

}
