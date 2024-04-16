#include <stdio.h>
#pragma warning(disable:4996)

// 6-5. 변수의 번지를 출력하는 프로그램
void main()
{
	int i = 127;
	int j;

	printf("i의 값 10진수, 16진수 출력: %d, %x \n", i, i); // 변수 i의 값을 10진수와 16진수로 출력
	printf("i의 주소: %x \n", &i); // &연산자: 주소연산자
	printf("i의 16진수 주소: %#x \n", &i);
	printf("j의 주소: %x \n", &j);
	printf("j의 16진수 주소: %#x \n", &j); // 16진수 출려겡 접두사 0x를 붙이는 옵션 
}