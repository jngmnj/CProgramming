#include <stdio.h>
#include <conio.h> // getche(), putch()
#include <ctype.h> //isupper()
#pragma warning(disable:4996)

// 6-12. 문자열(대문자)을 입력받아 암호화하는 프로그램
void main()
{
	char code[] = "5js7un9poqrwx3zadthec4kmv";
	char ch[100];
	int i = 0;

	// 초기화, 증분문 없이 조건만 가지고 있음.
	// getch()함수로 콘솔에서 한 문자를 일고 ch배열의[i]번째 요소에 저장한다. 
	// enter키 누르기전까지 반복
	for (; (ch[i] = getche()) != '\r';) 
		if (isupper(ch[i]))
			ch[i++] = code[ch[i] - 65]; // 0부터시작하는 배열인덱스로 변환
		else
			i++;
	ch[i] = '\0';
	printf("\n\n");

	for (i = 0; ch[i] != '\0'; i++)
		putch(ch[i]);

}