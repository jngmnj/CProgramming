#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

// 7-1. 이름, 전화번호, 주소를 입출력하는 구조체 프로그램
struct student
{
	char name[30];
	char phone[20];
	char address[100];
};
void main()
{
	struct student info; // 구조체 변수 선언
	
	strcpy(info.name, "홍길동");
	strcpy(info.phone, "010-1234-5678");
	strcpy(info.address, "서울특별시 성동구 성수동");

	printf("이름: %s \n", info.name);
	printf("연락처: %s \n", info.phone);
	printf("주소: %s \n", info.address);
}
