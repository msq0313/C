#ifndef _ARRAY_H_
#define _ARRAY_H_
#define BLOCK_SIZE 5
/*
首先用结构定义Array，结构体中有两个成员，
array指针和size， 用来表达将要创造的可变数组 
*/

typedef struct{
	int *array;
	int size;
}Array;

Array array_create(int init_size);	//创建数组

void array_free(Array *a);	//回收空间

int array_size(const Array *a);	//获得长度

int* array_at(Array *a, int index);	//获得单元数据，可做左右值

void array_inflate(Array *a, int more_size);	//增长

#endif
