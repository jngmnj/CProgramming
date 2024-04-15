#include <stdio.h>	
#include <string.h>	// 문자의 형태를 판별하는 함수의 원형을 갖고 있는 헤더 파일
#pragma warning(disable:4996)

// 5-8. 문자열을 복사하고, 길이를 구하는 프로그램
void main()
{
	int len;
	char s[50];
	strcpy(s, "COMPUTER SCIENCE"); // 문자열을 복사
	printf("%s \n\n", s);
	len = strlen(s);
	printf("%d \n\n", len);
}