#include <stdio.h>

// 비트 연산자를 이용한 곱셈과 나눗셈 연산 프로그램
void main()
{
	int result;
	printf("4*8/16=");
	result = 4;
	result = result << 3; // 곱셈: 왼쪽 시프트, 8은 2의 3승
	result = result >> 4; // 나눗셈: 오른쪽 시프트, 16은 2의 4승
	printf("%d\n", result);
}