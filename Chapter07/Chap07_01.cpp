#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

// 7-1. �̸�, ��ȭ��ȣ, �ּҸ� ������ϴ� ����ü ���α׷�
struct student
{
	char name[30];
	char phone[20];
	char address[100];
};
void main()
{
	struct student info; // ����ü ���� ����
	
	strcpy(info.name, "ȫ�浿");
	strcpy(info.phone, "010-1234-5678");
	strcpy(info.address, "����Ư���� ������ ������");

	printf("�̸�: %s \n", info.name);
	printf("����ó: %s \n", info.phone);
	printf("�ּ�: %s \n", info.address);
}
