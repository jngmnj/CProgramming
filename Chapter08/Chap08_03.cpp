#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)

// 8-3. ���� ����� ���α׷�
void main()
{
	char c;
	FILE* fp;

	fp = fopen("sample2", "w");
	for (c = 'A'; c <= 'Z'; c++) {
		fputc(c, fp);
	}

	getch(); // Ű���尡 ������������ ���
	fclose(fp);

	fp = fopen("sample2", "r");
	while (!feof(fp)) {
		printf("%c", c = fgetc(fp)); // ������ ���ۺ��� ������ ���ʴ�� 1���ھ� �о�鿩 ���
	}
	fclose(fp);
}