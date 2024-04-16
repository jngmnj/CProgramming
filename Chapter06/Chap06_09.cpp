#include <stdio.h>
#pragma warning(disable:4996)

// 6-9. 문자열에서 한글만 추출하는 프로그램
void main()
{
	//unsigned char *p = "Computer science 컴퓨터학과"; // 포인터 선언과 초기화
	const char* p = "Computer science 컴퓨터학과"; // 포인터 선언과 초기화
	unsigned char buff[20] = { 0, };
	int i = 0;

	while (*p) {
		if (*p > 127) { // 한글 검색조건(한글을 2byte로 구성되기 때문에 ASCII 코드값이 127이상임)
			buff[i++] = *p;
		}
		p++;
	}
	puts(buff);
	//printf("%s", buff);
}