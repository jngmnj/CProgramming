#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 6-14. 노래 제목 5개를 문자 포인터 배열에 입력받는 프로그램
void main()
{
#define TOTAL 5
	char *song[5];
	char newSong[80];
	int i;
	for (i = 0; i < TOTAL; i++) {
		printf("애창곡 #%d?\t", (i + 1));
		gets_s(newSong);
		song[i] = (char*)malloc((strlen(newSong) + 1) * sizeof(char));
		strcpy(song[i], newSong);
	}
	printf("***입력한 노래 제목***\n");
	for (i = (TOTAL - 1); i >= 0; i--) {
		printf("노래 #%d: %s\n", (i + 1), song[i]);
		free(song[i]); // 힙공간 반환
	}

}