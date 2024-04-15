#include <stdio.h>	
#include <ctype.h>	// 문자의 형태를 판별하는 함수의 원형을 갖고 있는 헤더 파일
#pragma warning(disable:4996)

// 5-6. 입력되는 문자가 숫자인지 판별하는 프로그램
void main()
{
	char ch;
	printf("문자나 숫자를 입력하시오. \n");
	ch = getchar();
	if (isdigit(ch))
		printf("%c is a number \n", ch);
	else
		printf("%c is not a number \n", ch);
}