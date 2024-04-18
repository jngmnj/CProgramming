#include <stdio.h>

// 8-6. 파일을 지우는 remove()함수
void main()
{
	FILE* fp;
	char filename[20];
	puts("삭제 파일 이름: ");
	gets_s(filename);

	if ((remove(filename) == -1)) // remove() : 파일삭제 함수
		printf("\n *** 삭제할 수 없습니다. *** \n");
	else 
		printf("\n *** 삭제할 되었습니다. *** \n");

	return;
}
