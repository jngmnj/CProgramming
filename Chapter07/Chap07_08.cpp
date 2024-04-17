#include <stdio.h>
#pragma warning(disable:4996)
#define WON 0
#define DOLLAR 1
#define N 2

// 7-8. 구조체의 멤버로 공용ㅇ체를 사용하는 프로그램
// 물건 정보를 저장하는 구조체에 정수형의 원화 가격과 실수형의 달러 가격정보를 저장하는 공용체를 멤버로 사용

// 공용체 정의
union monetary { 
	int won;
	float dollar;
};

// 구조체 정의
struct product {
	const char* name;
	int ptype;
	union monetary price; // 구조체 멤버로 공용체를 가짐
};

void main()
{
	// 구조체 변수 선언
	struct product item[N];
	item[0].name = "USB";
	item[0].ptype = WON;
	item[0].price.won = 30000;

	item[1].name = "CAMERA";
	item[1].ptype = DOLLAR;
	item[1].price.dollar = 800.85;

	for (int j = 0; j < N; j++) {
		printf("품명: %-10s\n", item[j].name);
		if(item[j].ptype) // 1
			printf("가격: $%.2f\n", item[j].price.dollar);
		else 
			printf("가격: %d원\n", item[j].price.won);
	}
}