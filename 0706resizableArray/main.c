#include <stdio.h>
#include <stdlib.h>
#include "Array.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*	
	可变数组
	1 可增长，当不够时，增长
	2 获得当前长度
	3 可访问单元数据 
*/
//	typedef struct{
//	int *array;
//	int size;
//	}Array;

Array array_create(int init_size){
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	//等号左边为指针，右边为数组 
	return a;
}//在create中为什么返回结构类型而不返回结构指针？
/*
Array* array_create(Array* a, int init_size)
{
	缺点：
	当a==null时 
	当a曾经指向过一个数组，还需要做free操作
	 
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
}//返回指针是为了可以让其做左值 

//也可写成get set
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
	printf("初始长度为%d\n",array_size(&a));
	*array_at(&a,0) = 10;
	printf("0号元素为%d\n",a.array[0]);
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
