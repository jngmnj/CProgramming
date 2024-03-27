#include <stdio.h>

// 단항 연산자 프로그램
void main()
{
	int x = 1;

	printf("x=%d \n", x++); // 1 출력 후 증가 x=2
	printf("x=%d \n", x++); // 2 출력 후 증가 x=3
	printf("x=%d \n", ++x); // 4 출력 전 증가 x=4
	printf("x=%d \n", x--); // 4 x=3
	printf("x=%d \n", x--); // 3 x=2
	printf("x=%d \n", --x); // 1 x=1
}