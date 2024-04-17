#include <stdio.h>
#pragma warning(disable:4996)

// 7-5. 구조체 배열요소를 구조체 포인터를 사용하여 배열요소의 역순으로 나타내는 프로그램
struct student {
	const char* name;
	const char* no;
	int score;
};
void main()
{
	struct student* ptr, a[5] = {
		{"홍길동1", "07011", 90},
		{"홍길동2", "07012", 90},
		{"홍길동3", "07013", 90},
		{"홍길동4", "07014", 90},
		{"홍길동5", "07015", 90},
	};

	ptr = a + 4; // a의 마지막위치로 이동+할당

	for (int i = 0; i < 5; ptr--) { // 구조체 포인터를 1씩 감소시키면서 각 구조체 배열요소를 표시
		printf("%12s %3s %6d\n", ptr->name, ptr->no, ptr->score);
	}
}
