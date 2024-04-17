#include <stdio.h>
#pragma warning(disable:4996)

// 7-4. 학생 3명에 대한 성적을 구조체를 이용하여 계산하는 프로그램
struct student {
	char name[20];
	int kor;
	int eng;
	int math;
	int total;
	float ave;
};

void main()
{
	struct student score[3];
	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오. ");
		scanf("%s", score[i].name); // name이 배열이기때문에 주소연산자 필요없음
		printf("국어 점수: ");
		scanf("%d", &score[i].kor);
		printf("영어 점수: ");
		scanf("%d", &score[i].eng);
		printf("수학 점수: ");
		scanf("%d", &score[i].math);
		score[i].total = score[i].kor + score[i].eng + score[i].math;
		score[i].ave = (float) score[i].total / 3;
		printf("이름: %s, 국어: %d, 영어: %d, 수학%d \n", score[i].name, score[i].kor, score[i].eng, score[i].math);
		printf("총점: %d, 평균 : %f \n", score[i].total, score[i].ave);
	}
}