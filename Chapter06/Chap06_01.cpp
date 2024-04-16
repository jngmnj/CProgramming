#include <stdio.h>
#pragma warning(disable:4996)
#define N 10

// 6-1. 학생들 성적을 입력받아 총점과 평균을 구하고, 성적순으로 출력하는 프로그램
void input(int scr[], int size);
int sum2(int scr[], int size);
void sort(int scr[], int size);

void main()
{
	int score[N] = {0};
	int j, sum;
	float average;

	input(score, N);
	sum = sum2(score, N);
	average = (float)sum / N;
	printf("평균: %f\n", average);

	sort(score, N);
	printf("성적순 : ");
	for (j = 0; j < N; j++)
		printf("%d ", score[j]);
	printf("\n");
}

// 성적입력
void input(int scr[], int size) {
	int j;
	for (j = 0; j < size; j++) {
		printf("%d번째 성적을 입력하세요. ", j + 1);
		scanf("%d", &(scr[j]));
	}
}

// 
int sum2(int scr[], int size) {
	int sum, j;
	for (sum = 0, j = 0; j < size; j++)
		sum += scr[j];
	return sum;
}

// 정렬
void sort(int scr[], int size) {
	int j, k, temp;
	for (j = 0; j < size - 1; j++) {
		for (k = size - 1; k > j; k--) {
			if (scr[k - 1] > scr[k]) { // 큰 점수와 작은 점수의 순서를 바꿈
				temp = scr[k - 1];
				scr[k - 1] = scr[k];
				scr[k] = temp;
			}
		}		
	}
}