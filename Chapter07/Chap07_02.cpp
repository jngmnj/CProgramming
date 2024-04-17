#include <stdio.h>
#pragma warning(disable:4996)

// 7-2. 학생의 이름과 나이 및 성별을 출력하는 구조체 프로그램
struct student // 구조체 정의
{
	const char *name; 
	const char *sex;
	int age;
	/*
	문자열리터럴을 가리키는 포인터를 선언하는것은 바람직하지 않음. 
	문자열리터럴은 읽기전용이기때문에 수정할수 없으니까.. 
	그래서 const를 붙여 포인터로 선언하는것은 가능함
	*/
};
void main()
{
	int i;

	struct student a[4] = { {"홍길동", "남", 50}, {"홍길똥", "남", 50 }, {"홍길동", "남", 50 }, {"홍길동", "남", 50} };
	
	for (i = 0; i < 4; i++) {
		printf("%s %s %d \n", a[i].name, a[i].sex, a[i].age);
	}
	
}
