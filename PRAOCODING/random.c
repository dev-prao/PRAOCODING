// 랜덤
#include <time.h> // 랜덤을 쓸 때 꼭 써야함
#include <stdlib.h> // 스탠다드 라이브러리
#include <stdio.h>

int main_random(void)
{
	// int num = rand() % 어떤 수;
	// srand(time(NULL)); // 난수 초기화
	// int num = rand() % 3 + 1; // 1 ~ 3

	printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));
	printf("\n\n난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	return 0;
}