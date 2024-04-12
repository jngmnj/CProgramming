#include <stdio.h>	
#include <string.h>		// 문자열 처리 함수의 원형을 갖고 있는 헤더파일
#pragma warning(disable:4996)

// 5-2. 소문자를 대문자로 변환하는 프로그램
void main()
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned i, len;
	puts(string);			// puts() 함수는 문자열을 화면에 출력하는 함수
	len = strlen(string);	// strlen() 함수는 문자열의 길이(문자 수)를 반환하는 함수
	for (i = 0; i < len; i++) {
		// 방법 1: 비트 단위 AND 연산을 사용하여 소문자를 대문자로 변환
		string[i] = string[i] & 0xDF; // 2진수로 11011111
		
		// 방법 2: ASCII 코드값에서 32를 빼서 대문자로 변환
		// string[i] -= 32;
	}
	puts(string);
}