#include <stdio.h>	
#include <string.h>	
#pragma warning(disable:4996)

// 5-4. 문자열의 길이를 구하는 프로그램
void main()
{
	char string[200];
	printf("문장을 입력한 후, Enter키를 치세요! \n");
	printf("아무것도 입력하지 않으면 프로그램은 종료됩니다! \n");

	do {
		gets_s(string, sizeof(string)); // 문자열 입력
		if (strlen(string) == 0) break;
		printf("문자열의 길이는 %d입니다.\n", int(strlen(string))); 
	} while (1);
}