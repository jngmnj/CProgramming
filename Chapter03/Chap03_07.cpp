#include <stdio.h>

// ���� ������ ���α׷�
void main()
{
	int x = 1;

	printf("x=%d \n", x++); // 1 ��� �� ���� x=2
	printf("x=%d \n", x++); // 2 ��� �� ���� x=3
	printf("x=%d \n", ++x); // 4 ��� �� ���� x=4
	printf("x=%d \n", x--); // 4 x=3
	printf("x=%d \n", x--); // 3 x=2
	printf("x=%d \n", --x); // 1 x=1
}