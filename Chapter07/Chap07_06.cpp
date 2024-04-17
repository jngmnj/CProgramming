#include <stdio.h>
#pragma warning(disable:4996)

// 7-6. 구조체 배열요소를 이용하여 크기 순으로 정렬하는 프로그램
struct student {
	const char* name;
	const char* no;
	int score;
};
void main() {
	struct student temp, a[5] = {
		{"홍길동1", "07011", 90},
		{"홍길동2", "07012", 84},
		{"홍길동3", "07013", 80},
		{"홍길동4", "07014", 78},
		{"홍길동5", "07015", 95},
	};

	printf("\n <정렬 전>\t이름\t학번\t점수\n");
	for (int i = 0; i < 5; i++)
		printf("%20s %6s %6d \n", a[i].name, a[i].no, a[i].score);

	// 구조체 score멤버변수 버블정렬
	for (int j = 1; j < 5; j++)
		for (int i = 1; i < 5; i++)
			if (a[i].score < a[i - 1].score)
				temp = a[i], a[i] = a[i - 1], a[i - 1] = temp;

	printf("\n <정렬 후>\t이름\t학번\t점수\n");
	for (int i = 0; i < 5; i++)
		printf("%20s %6s %6d \n", a[i].name, a[i].no, a[i].score);
}
