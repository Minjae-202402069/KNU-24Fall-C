#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	int a,b,c;
	int D;
	float value1, value2;

	printf("ax^2 + bx + c의 형태의 이차 방정식\n");
	printf("a,b,c의 계수를 입력하세요: ");
	scanf_s("%d%d%d", &a, &b, &c);

	D = b * b - 4 * a * c;

	if (D > 0) {
		value1 = ((-b + sqrt(b * b - 4 * a * c))) / (2 * a);
		value2 = ((-b - sqrt(b *b - 4 * a * c))) / (2 * a);
		printf("D = %d", D);
		printf("서로 다른 두 근 %.2f , %.2f를(을) 가짐\n", value1, value2);
	}
	else if (D == 0) {
		printf("D = %d", D);
		value1 = ((-b + sqrt(b * b - 4 * a * c))) / (2 * a);
		printf("중근 % .2f를(을) 가짐", value1);
	}
	else {
		printf("D = %d", D);
		printf("허근을 가짐\n");
	}
	return 0;
}