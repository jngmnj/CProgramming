// 2-6. 매크로 함수 정의 프로그램

#include <stdio.h>

#define MAX(x,y) x>y? x : y
#define MIN(x,y) x<y? x : y

void main()
{
	printf("최댓값: %d\n", MAX(10, 20));
	printf("최솟값: %d\n", MIN(10, 20));
}