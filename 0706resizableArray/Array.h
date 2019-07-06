#ifndef _ARRAY_H_
#define _ARRAY_H_
#define BLOCK_SIZE 5
/*
�����ýṹ����Array���ṹ������������Ա��
arrayָ���size�� ������ｫҪ����Ŀɱ����� 
*/

typedef struct{
	int *array;
	int size;
}Array;

Array array_create(int init_size);	//��������

void array_free(Array *a);	//���տռ�

int array_size(const Array *a);	//��ó���

int* array_at(Array *a, int index);	//��õ�Ԫ���ݣ���������ֵ

void array_inflate(Array *a, int more_size);	//����

#endif
