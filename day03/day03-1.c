#include <stdio.h>

int prime_num( int num);

int main() {
	
	int a;
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� :");
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
		printf("�Ҽ��Դϴ�.\n");
	}
	else {
		printf("�Ҽ��� �ƴմϴ�.\n");
	}
	return 0;
}

/*
������ Ǯ��

int prime_num(int num){
	
	for (int i = 2; i < num ; i++) {
		if (num % i == 0 ) {
			return 0;
		}
	}
	return 1;
}

0 = �Ҽ� X
1 = �Ҽ�

*/
