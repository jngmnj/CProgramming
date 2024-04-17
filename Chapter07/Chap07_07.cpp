#include <stdio.h>
#pragma warning(disable:4996)

// 7-7. 공용체 프로그램
// tag의 변수 v1은 정수 n과 실수 i로 선언된 두 멤버 중에서 최근에 결정된 멤버 i에 대한 변수로만 사용되는것을 보여줌

union tag {
	int n;
	float i;
} v1, *pt;

void main() {
	float k;

	pt = &v1;
	v1.n = 10;
	v1.i = 20.0;
	k = pt->i; // pt->n으로 사용할 수 없음
	//k = pt->n;

	printf("%f", k);
}