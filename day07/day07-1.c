#include <stdio.h>

int main()
{
	int n;
	printf("�Ƕ�̵� ���� ����:  ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < ( i*2 )+1; k++) {
			printf("*");
		}
		printf("\n");
	}
}