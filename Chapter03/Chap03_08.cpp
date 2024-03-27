#include <stdio.h>

// 입력된 정수의 짝수와 홀수 판별 프로그램
void main()
{
	int i;
	printf("정수를 입력하시오.");
	scanf_s("%d", &i);
	printf("%s \n", (i % 2) ? "홀수" : "짝수");
}