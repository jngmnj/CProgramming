#include <stdio.h>											// standard input output header의 약자. 표준입출력에 관련된 내용을 담고있는 헤더파일 stdio.h을 포함
#pragma warning(disable:4996)								// 모든 경고 해제

// iF문을 사용한 프로그램을 SWITCH~CASE문을 사용하여 재작성하시오. 
// 주석 필수, 상단에 학번, 이름을 출력하는 문장을 반드시 넣어야함. 
int main(void)												// main함수는 void를 받고(아무것도 받지않음) int를 리턴한다
{
	printf("202434-363441 지정민\n");						// 상단 학번, 이름 출력

	int jumsu;												// 정수형 jumsu 선언

	printf("0점에서 100점수 사이의 점수를 입력하세요.\n");	// 입력받을 값 설명출력
	scanf("%d", &jumsu);									// 변수 jumsu에 입력값 할당

	switch (jumsu / 10)										// jumsu는 int형이고 10으로 나눠서 소숫점이 된다고해도 몫만 남는다. 
	{
		case 10:											// jumsu / 10가 10인 경우 (100점)
		case 9:												// jumsu / 10가 9인 경우 (90점~99점)
			printf("%d점은 A학점입니다.\n", jumsu);			// 입력받은 jumsu값과 함께 A학점 출력
			break;											// switch문 빠져나옴
		case 8:												// jumsu / 10가 8인 경우 (80점~89점)
			printf("%d점은 B학점입니다.\n", jumsu);			// 입력받은 jumsu값과 함께 B학점 출력
			break;											// switch문 빠져나옴
		case 7:												// jumsu / 10가 7인 경우 (70점~79점)
			printf("%d점은 C학점입니다.\n", jumsu);			// 입력받은 jumsu값과 함께 C학점 출력
			break;											// switch문 빠져나옴
		case 6:												// jumsu / 10가 7인 경우 (60점~69점)
			printf("%d점은 D학점입니다.\n", jumsu);			// 입력받은 jumsu값과 함께 D학점 출력
			break;											// switch문 빠져나옴
		default:											// 위 case문에 해당하지 않는경우 default 코드 실행
			printf("%d점은 F학점입니다.\n", jumsu);			// 입력받은 jumsu값과 함께 F학점 출력
			break;											// switch문 빠져나옴
	}

	return 0;												// main 함수가 int형을 반환하기때문에 0을 리턴
}