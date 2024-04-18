#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)

// 8-3. 파일 입출력 프로그램
void main()
{
	char c;
	FILE* fp;

	fp = fopen("sample2", "w");
	for (c = 'A'; c <= 'Z'; c++) {
		fputc(c, fp);
	}

	getch(); // 키보드가 눌러질때까지 대기
	fclose(fp);

	fp = fopen("sample2", "r");
	while (!feof(fp)) {
		printf("%c", c = fgetc(fp)); // 파일의 시작부터 끝까지 차례대로 1문자씩 읽어들여 출력
	}
	fclose(fp);
}