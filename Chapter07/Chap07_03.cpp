#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 7-3. 10���� ����ڿ� ���� �̸�, ��ȭ��ȣ, �۾��ð�, �׸��� �ð��� �ӱ� �Է¹޾� �����ϴ� ����ü �迭 ���α׷�
struct s_type {
	char name[40];
	char phone[14];
	int hours;
	int wage;
} emp[10];

void main()
{
	char temp[80];

	for (int i = 0; i < 10; i++) {
		printf("Enter name:");
		gets_s(emp[i].name);
		printf("Enter phone number: ");
		gets_s(emp[i].phone);
		printf("Enter hours worked: ");
		gets_s(temp);
		emp[i].hours = atoi(temp); // atoi(): ���ڿ��� ������ ��ȯ�ϴ� �Լ�
		printf("Enter horly wage: ");
		gets_s(temp);
		emp[i].wage = atoi(temp);
		printf("name=%s, phone=%s, hour=%d, wage=%d \n", emp[i].name, emp[i].phone, emp[i].hours, emp[i].wage);
	}
}