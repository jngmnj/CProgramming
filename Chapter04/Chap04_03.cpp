#include <stdio.h>
#pragma warning(disable:4996)

// 계산기 프로그램
void main()
{
	int op_num1, op_num2;
	char op;

	printf("계산기 프로그램 \n");
	printf("연산자 입력 (+,-,*,/):");
	scanf("%c", &op);

	printf("%c의 피연산자1 입력:", op);
	scanf("%d", &op_num1);
	printf("%c의 피연산자1 입력:", op);
	scanf("%d", &op_num2);

	switch (op) {
	case '+': 
		printf("%d + %d = %d", op_num1, op_num2, op_num1 + op_num2);
		break;
	case '-':
		printf("%d - %d = %d", op_num1, op_num2, op_num1 - op_num2);
		break;
	case '*':
		printf("%d * %d = %d", op_num1, op_num2, op_num1 * op_num2);
		break;
	case '/':
		printf("%d / %d = %d", op_num1, op_num2, op_num1 / op_num2);
		break;
	default: 
		printf("잘못된 연산자 입니다. \n");
	}
}