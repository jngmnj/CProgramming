#include <stdio.h>
#pragma warning(disable:4996)

// 7-7. ����ü ���α׷�
// tag�� ���� v1�� ���� n�� �Ǽ� i�� ����� �� ��� �߿��� �ֱٿ� ������ ��� i�� ���� �����θ� ���Ǵ°��� ������

union tag {
	int n;
	float i;
} v1, *pt;

void main() {
	float k;

	pt = &v1;
	v1.n = 10;
	v1.i = 20.0;
	k = pt->i; // pt->n���� ����� �� ����
	//k = pt->n;

	printf("%f", k);
}