#include <stdio.h>
#pragma warning(disable:4996)

// 7-6. ����ü �迭��Ҹ� �̿��Ͽ� ũ�� ������ �����ϴ� ���α׷�
struct student {
	const char* name;
	const char* no;
	int score;
};
void main() {
	struct student temp, a[5] = {
		{"ȫ�浿1", "07011", 90},
		{"ȫ�浿2", "07012", 84},
		{"ȫ�浿3", "07013", 80},
		{"ȫ�浿4", "07014", 78},
		{"ȫ�浿5", "07015", 95},
	};

	printf("\n <���� ��>\t�̸�\t�й�\t����\n");
	for (int i = 0; i < 5; i++)
		printf("%20s %6s %6d \n", a[i].name, a[i].no, a[i].score);

	// ����ü score������� ��������
	for (int j = 1; j < 5; j++)
		for (int i = 1; i < 5; i++)
			if (a[i].score < a[i - 1].score)
				temp = a[i], a[i] = a[i - 1], a[i - 1] = temp;

	printf("\n <���� ��>\t�̸�\t�й�\t����\n");
	for (int i = 0; i < 5; i++)
		printf("%20s %6s %6d \n", a[i].name, a[i].no, a[i].score);
}
