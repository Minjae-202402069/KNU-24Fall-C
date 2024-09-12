#include <stdio.h>

int main()
{
	int a;
	double num1, num2;

	printf("원하는 기능을 입력하시오.\n");
	printf("1.더하기 2.빼기 3.곱하기 4.나누기\n");
	scanf_s("%d", &a);
	printf("기능 %d\n", a);

	printf("숫자 1을 입력하세요 :");
	scanf_s("%lf", &num1);
	printf("숫자 2를 입력하세요 :");
	scanf_s("%lf", &num2);

	if (a == 1) {
		printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
	}
	else if (a == 2) {
		printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
	}
	else if (a == 3) {
		printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
	}
	else if (a == 4) {
		printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
	}
	else {
		printf("입력오류, 프로그램을 다시 시작하세요.\n");
	}
	return 0;
}