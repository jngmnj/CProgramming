#include <stdio.h>

// 입력된 두 정수 중 큰 수를 출력하는 프로그램
void main()
{
	int a, b, c;
	printf("첫번째 숫자를 입력하시오. ");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력하시오. ");
	scanf_s("%d", &b);
	c = (a < b) ? b : a;
	printf("큰 수는 %d 입니다.", c);
}