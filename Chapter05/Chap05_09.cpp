#include <stdio.h>	
#include <string.h>	// 문자의 형태를 판별하는 함수의 원형을 갖고 있는 헤더 파일
#pragma warning(disable:4996)

// 5-9. 입력되는 두 문자열을 연결하는 프로그램
void main()
{
	char str1[20], str2[20];
	printf("문자열 두개를 입력하시오. \n");
	scanf("%s", str1);
	scanf("%s", str2);
	strcat(str1, str2); // strcat(): 문자열 연결함수. 첫번째문자열에 마지막 \0을 없애고 두번째문자열을 이어붙임
	printf("%s \n", str1);
}