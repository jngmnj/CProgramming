#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 7-3. 10명의 고용자에 대한 이름, 전화번호, 작업시간, 그리고 시간당 임금 입력받아 저장하는 구조체 배열 프로그램
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
		emp[i].hours = atoi(temp); // atoi(): 문자열을 정수로 변환하는 함수
		printf("Enter horly wage: ");
		gets_s(temp);
		emp[i].wage = atoi(temp);
		printf("name=%s, phone=%s, hour=%d, wage=%d \n", emp[i].name, emp[i].phone, emp[i].hours, emp[i].wage);
	}
}