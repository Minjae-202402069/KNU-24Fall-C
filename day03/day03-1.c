#include <stdio.h>

int prime_num( int num);

int main() {
	
	int a;
	printf("소수인지 확인할 수를 입력하세요 :");
	scanf_s("%d", &a);
	prime_num(a);

	return 0;
}

int prime_num(int num) {

	int temp = 0;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			temp++;
		}
	}
	if (temp == 2) {
		printf("소수입니다.\n");
	}
	else {
		printf("소수가 아닙니다.\n");
	}

}