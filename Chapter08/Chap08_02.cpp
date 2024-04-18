#include <stdio.h>
#pragma warning(disable:4996)

// 8-2. 텍스트 파일의 자료 읽기 프로그램
void main()
{
	FILE* fp;
	char buff[100];

	fp = fopen("sample1", "r"); // 읽기모드

	if (fp != NULL) {
		while (!feof(fp)) { // 파일의 끝 검사
			fgets(buff, 100, fp);
			if (feof(fp)) break;
			printf(buff);
		}
		fclose(fp);
	}
}