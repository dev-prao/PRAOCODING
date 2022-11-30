#include <stdio.h>

// 선언
void p(int num);


int main(void)
{
	// function
	// 계산기

	int num = 2;
	// printf("num은 %d 입니다\n", num); // 2
	p(num);
	// 2 + 3 은?
	num = num + 3; // num += 3;
	p(num);

	// printf("num 은 %d 입니다\n", num); // 5

	// 5- 1 은?
	num -= 1; // num = num - 1; // 4
	p(num);

	// printf("num 은 %d 입니다\n", num); // 4
	// 4 x 3 은?
	num *= 3;
	p(num);

	// printf("num은 %d 입니다\n", num); // 12

	// 12 / 6 은?
	num /= 6;
	p(num);

	// printf("num 은 %d 입니다\n", num); // 2


	return 0;
}

// 정의
void p(int num)
{
	printf("num 은 %d 입니다\n", num);
}