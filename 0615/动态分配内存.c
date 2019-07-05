#include <stdio.h>
#include <stdlib.h>
/*
	void* malloc(size_t size);
	向malloc申请的空间的大小是以字节为单位的
	返回的结果是void*，需要类型转换为需要的类型
	(int*)malloc(n*sizeof(int)) 
*/
main()
{
	int i = 0;
	void *p = 0;
	while(p = malloc(1024 * 1024 * 1024)){
		i++;
	}
	printf("分配了%dG空间" , i);
	free(p);

}
