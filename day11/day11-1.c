#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	int a,b,c;
	int D;
	float value1, value2;

	printf("ax^2 + bx + c�� ������ ���� ������\n");
	printf("a,b,c�� ����� �Է��ϼ���: ");
	scanf_s("%d%d%d", &a, &b, &c);

	D = b * b - 4 * a * c;

	if (D > 0) {
		value1 = ((-b + sqrt(b * b - 4 * a * c))) / (2 * a);
		value2 = ((-b - sqrt(b *b - 4 * a * c))) / (2 * a);
		printf("D = %d", D);
		printf("���� �ٸ� �� �� %.2f , %.2f��(��) ����\n", value1, value2);
	}
	else if (D == 0) {
		printf("D = %d", D);
		value1 = ((-b + sqrt(b * b - 4 * a * c))) / (2 * a);
		printf("�߱� % .2f��(��) ����", value1);
	}
	else {
		printf("D = %d", D);
		printf("����� ����\n");
	}
	return 0;
}