#include <stdio.h>
#pragma warning(disable:4996)

// 7-5. ����ü �迭��Ҹ� ����ü �����͸� ����Ͽ� �迭����� �������� ��Ÿ���� ���α׷�
struct student {
	const char* name;
	const char* no;
	int score;
};
void main()
{
	struct student* ptr, a[5] = {
		{"ȫ�浿1", "07011", 90},
		{"ȫ�浿2", "07012", 90},
		{"ȫ�浿3", "07013", 90},
		{"ȫ�浿4", "07014", 90},
		{"ȫ�浿5", "07015", 90},
	};

	ptr = a + 4; // a�� ��������ġ�� �̵�+�Ҵ�

	for (int i = 0; i < 5; ptr--) { // ����ü �����͸� 1�� ���ҽ�Ű�鼭 �� ����ü �迭��Ҹ� ǥ��
		printf("%12s %3s %6d\n", ptr->name, ptr->no, ptr->score);
	}
}
