#include <stdio.h>

// 입력된 영문자의 소문자 여부를 판별하는 프로그램
void main()
{
	char ch;
	int j;

	printf("문자를 입력하시오. \n");
	scanf_s("%c", &ch, 1); // 3번째 매개변수 메모리 크기 명시
	j = (ch >= 'a' && ch <= 'z'); // a부터 z안에 있는가 = 소문자인가 T=1, F=0

	printf("결과는 %d \n", j);
}