#include <stdio.h>
#pragma warning(disable:4996)

// 6-11. 소문자로 된 문자열을 대문자로 변환하는 프로그램
void main()
{
	char arr[] = "programming";
	char *ptr;
	int bigchar;
	ptr = arr; // 포인터 변수에 배열의 시작주소 치환
	
	printf("before: %s \n\n", arr);
	printf("after: ");

	while (*ptr) {
		bigchar = *ptr - 32; // ASCII 대문자 변환
		printf("%c", bigchar);
		ptr++;
	}
	printf("\n");
}