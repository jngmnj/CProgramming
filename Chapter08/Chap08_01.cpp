#include <stdio.h>
#pragma warning(disable:4996)

// 8-1. �ؽ�Ʈ ������ �ڷ� ���� ���α׷�
void main()
{
	FILE* fp; // ���� ������ ����

	fp = fopen("sample1.txt", "w");

	if (fp != NULL) {
		fputs("���ѹα� \n", fp);
		fputs("���� \n", fp);
		fputs("���α� \n", fp);
		fputs("������ \n", fp);
		fputs("169���� \n", fp);
	}

	fclose(fp);
}
