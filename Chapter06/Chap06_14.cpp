#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 6-14. �뷡 ���� 5���� ���� ������ �迭�� �Է¹޴� ���α׷�
void main()
{
#define TOTAL 5
	char *song[5];
	char newSong[80];
	int i;
	for (i = 0; i < TOTAL; i++) {
		printf("��â�� #%d?\t", (i + 1));
		gets_s(newSong);
		song[i] = (char*)malloc((strlen(newSong) + 1) * sizeof(char));
		strcpy(song[i], newSong);
	}
	printf("***�Է��� �뷡 ����***\n");
	for (i = (TOTAL - 1); i >= 0; i--) {
		printf("�뷡 #%d: %s\n", (i + 1), song[i]);
		free(song[i]); // ������ ��ȯ
	}

}