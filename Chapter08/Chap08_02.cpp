#include <stdio.h>
#pragma warning(disable:4996)

// 8-2. �ؽ�Ʈ ������ �ڷ� �б� ���α׷�
void main()
{
	FILE* fp;
	char buff[100];

	fp = fopen("sample1", "r"); // �б���

	if (fp != NULL) {
		while (!feof(fp)) { // ������ �� �˻�
			fgets(buff, 100, fp);
			if (feof(fp)) break;
			printf(buff);
		}
		fclose(fp);
	}
}