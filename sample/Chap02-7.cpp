// 2-7. 매크로 정의 해제 프로그램

#include <stdio.h>

#define SIZE 100

#if defined SIZE
#undef SIZE
#define SIZE 200
#else
#define SIZE 300
#endif

void main()
{
	printf("SIZE: %d\n", SIZE);
}