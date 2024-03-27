#include <stdio.h>

void main()
{
	char c;
	printf("소문자 한개를 입력하시오. \n");
	c = getchar();	// getchar(): 문자형 자료 입력함수
	c = c - 32;		// 소문자를 대문자로 변환(ASCII)
	putchar(c);		// 문자형 자료 출력함수
}