#include <stdio.h>
#pragma wargning(disable:4996)

// 표를 이용하여 삼각형 모양을 출력하는 프로그램
void main()
{
	// int i, j;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) { 
			printf("*");
		}
		printf("\n");
	}
}