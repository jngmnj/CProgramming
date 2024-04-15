#include <stdio.h>	
#include <ctype.h>	// 문자의 형태를 판별하는 함수의 원형을 갖고 있는 헤더 파일
#pragma warning(disable:4996)

// 5-7. 입력되는 소문자를 대문자로, 대문자를 소문자로 변환하는 프로그램
void main()
{
	char ch, ch1, ch2;
	printf("문자를 입력하시오. \n");
	ch = getchar();
	if (isupper(ch)) {
		printf("%c is a uppercase \n", ch);
		ch1 = tolower(ch);
		printf("%c is a lowercase \n", ch1);
	} 
	else if(islower(ch)) {
		printf("%c is a lowercase \n", ch);
		ch2 = toupper(ch);
		printf("%c is a uppercase \n", ch2);
	}
	else
		printf("%c is not alpha character \n", ch);
}