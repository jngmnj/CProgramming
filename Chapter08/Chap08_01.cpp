#include <stdio.h>
#pragma warning(disable:4996)

// 8-1. 텍스트 파일의 자료 쓰기 프로그램
void main()
{
	FILE* fp; // 파일 포인터 선언

	fp = fopen("sample1.txt", "w");

	if (fp != NULL) {
		fputs("대한민국 \n", fp);
		fputs("서울 \n", fp);
		fputs("종로구 \n", fp);
		fputs("동숭동 \n", fp);
		fputs("169번지 \n", fp);
	}

	fclose(fp);
}
