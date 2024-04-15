#include <stdio.h>	
#include <ctype.h>	// 문자의 형태를 판별하는 함수의 원형을 갖고 있는 헤더 파일
#pragma warning(disable:4996)

// 5-5. 입력되는 문자가 영문자인지 판별하는 프로그램
void main()
{
	char ch;
	printf("문자나 숫자를 입력하시오. \n");
	ch = getchar();
	if (isalpha(ch))
		printf("%c is alpha character \n", ch);
	else
		printf("%c is not alpha character \n", ch);
}