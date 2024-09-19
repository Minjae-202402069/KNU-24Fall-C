#include <stdio.h>

int factorial(int num);

int main()
{
	int a, temp;
	printf("계산할 팩토리얼 값 : ");
	scanf_s("%d", &a);
	temp = factorial(a);

	printf("%d", temp);
}

int factorial(int num)
{
	int res = 1;
	
	if (num == 1) {
		return 1;
	}
	else {
		res = num * factorial(num - 1);
	}

	return res;
}