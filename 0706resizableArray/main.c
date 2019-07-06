#include <stdio.h>
#include <stdlib.h>
#include "Array.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*	
	�ɱ�����
	1 ��������������ʱ������
	2 ��õ�ǰ����
	3 �ɷ��ʵ�Ԫ���� 
*/
//	typedef struct{
//	int *array;
//	int size;
//	}Array;

Array array_create(int init_size){
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	//�Ⱥ����Ϊָ�룬�ұ�Ϊ���� 
	return a;
}//��create��Ϊʲô���ؽṹ���Ͷ������ؽṹָ�룿
/*
Array* array_create(Array* a, int init_size)
{
	ȱ�㣺
	��a==nullʱ 
	��a����ָ���һ�����飬����Ҫ��free����
	 
	a->size = init_size;
	a->array = (int*)malloc(sizeof(int)*a->size;
	return a;	
}
*/ 
void array_free(Array *a){
	free(a->array);
	a->array = NULL;
	a->size = 0;
}
int array_size(const Array *a){
	return a->size;
}
int* array_at(Array *a, int index){
	if (index >= a->size){
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
	}
	return &(a->array[index]);
}//����ָ����Ϊ�˿�����������ֵ 

//Ҳ��д��get set
int array_get(const Array *a, int index){
	return a->array[index];
} 
int array_set(Array *a, int index, int value){
	a->array[index] = value;
}

void array_inflate(Array *a, int more_size){
	int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
	int i;
	for(i = 0; i <a->size; i++){
		p[i] = a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size += more_size;
}


int main(int argc, char *argv[]) {
	Array a = array_create(5);
	printf("��ʼ����Ϊ%d\n",array_size(&a));
	*array_at(&a,0) = 10;
	printf("0��Ԫ��Ϊ%d\n",a.array[0]);
	int number = 0;
	int cnt = 1;
	int i;
	while(number != -1){
		scanf("%d",&number);
		if(number != -1)
			*array_at(&a,cnt++) = number;
	}
	for(i = 0; i < array_size(&a); i++){
		printf("%d ",array_get(&a,i));
	}
	array_free(&a);
	return 0;
}
