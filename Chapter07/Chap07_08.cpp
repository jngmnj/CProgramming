#include <stdio.h>
#pragma warning(disable:4996)
#define WON 0
#define DOLLAR 1
#define N 2

// 7-8. ����ü�� ����� ���뤷ü�� ����ϴ� ���α׷�
// ���� ������ �����ϴ� ����ü�� �������� ��ȭ ���ݰ� �Ǽ����� �޷� ���������� �����ϴ� ����ü�� ����� ���

// ����ü ����
union monetary { 
	int won;
	float dollar;
};

// ����ü ����
struct product {
	const char* name;
	int ptype;
	union monetary price; // ����ü ����� ����ü�� ����
};

void main()
{
	// ����ü ���� ����
	struct product item[N];
	item[0].name = "USB";
	item[0].ptype = WON;
	item[0].price.won = 30000;

	item[1].name = "CAMERA";
	item[1].ptype = DOLLAR;
	item[1].price.dollar = 800.85;

	for (int j = 0; j < N; j++) {
		printf("ǰ��: %-10s\n", item[j].name);
		if(item[j].ptype) // 1
			printf("����: $%.2f\n", item[j].price.dollar);
		else 
			printf("����: %d��\n", item[j].price.won);
	}
}