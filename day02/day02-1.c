#include <stdio.h>

int main()
{
	int a;
	double num1, num2;

	printf("���ϴ� ����� �Է��Ͻÿ�.\n");
	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������\n");
	scanf_s("%d", &a);
	printf("��� %d\n", a);

	printf("���� 1�� �Է��ϼ��� :");
	scanf_s("%lf", &num1);
	printf("���� 2�� �Է��ϼ��� :");
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
		printf("�Է¿���, ���α׷��� �ٽ� �����ϼ���.\n");
	}
	return 0;
}