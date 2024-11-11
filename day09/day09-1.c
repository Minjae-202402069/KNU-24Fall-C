#include <stdio.h>

struct vector {
	int x, y, z;
};

void sum_vec(struct vector v1,struct vector v2) {
	int x, y, z;
	x = v1.x + v2.x;
	y = v1.y + v2.y;
	z = v1.z + v2.z;
	printf("벡터의 합: %d\t,%d\t,%d\n",x,y,z);
}

void sub_vec(struct vector v1, struct vector v2) {
	int x, y, z;
	x = v1.x - v2.x;
	y = v1.y - v2.y;
	z = v1.z - v2.z;
	printf("벡터의 차: %d\t,%d\t,%d\n", x, y, z);
}

void dot_vec(struct vector v1, struct vector v2) {
	int x, y, z;
	x = v1.x * v2.x;
	y = v1.y * v2.y;
	z = v1.z * v2.z;
	printf("벡터의 내적: %d\n", x + y + z);
}

void cross_vec(struct vector v1, struct vector v2) {
	int x, y, z;
	x = v1.y * v2.z - v1.z * v2.y;
	y = v1.z * v2.x - v1.x * v2.z;
	z = v1.x * v2.y - v1.y * v2.x;
	printf("벡터의 외적: %d\t,%d\t,%d\n", x, y, z);
}

int main()
{
	struct vector  v1;
	struct vector v2;
	int opt;

	printf("첫번째 벡터를 입력하세요: ");
	scanf_s("%d%d%d", &v1.x, &v1.y, &v1.z);
	printf("두번째 벡터를 입력하세요: ");
	scanf_s("%d%d%d", &v2.x, &v2.y, &v2.z);
	printf("입력된 첫번째 백터 %d\t,%d\t,%d\n", v1.x, v1.y, v1.z);
	printf("입력된 두번째 백터 %d\t,%d\t,%d\n", v2.x, v2.y, v2.z);

	while (1) {
		printf("----------------------------------\n");
		printf("1. 벡터의 합\n");
		printf("2. 벡터의 차\n");
		printf("3. 벡터의 외적\n");
		printf("4. 벡터의 내적\n");
		printf("5. 프로그램 종료\n");
		printf("----------------------------------\n");
		printf("명령 입력: ");
		scanf_s("%d", &opt);

		switch (opt) {
		case 1:
			sum_vec(v1, v2);
			break;
		case 2:
			sub_vec(v1, v2);
			break;
		case 3:
			cross_vec(v1, v2);
			break;
		case 4:
			dot_vec(v1, v2);
			break;
		case 5:
			printf("프로그램이 종료되었습니다.\n");
			break;
		default:
			printf("잘못된 입력입니다.\n");
			break;
		}
		if (opt == 5) {
			break;
		}
	}
}