#include <stdio.h>

struct vector {
	int x, y, z;
};

void sum_vec(struct vector v1,struct vector v2) {
	int x, y, z;
	x = v1.x + v2.x;
	y = v1.y + v2.y;
	z = v1.z + v2.z;
	printf("������ ��: %d\t,%d\t,%d\n",x,y,z);
}

void sub_vec(struct vector v1, struct vector v2) {
	int x, y, z;
	x = v1.x - v2.x;
	y = v1.y - v2.y;
	z = v1.z - v2.z;
	printf("������ ��: %d\t,%d\t,%d\n", x, y, z);
}

void dot_vec(struct vector v1, struct vector v2) {
	int x, y, z;
	x = v1.x * v2.x;
	y = v1.y * v2.y;
	z = v1.z * v2.z;
	printf("������ ����: %d\n", x + y + z);
}

void cross_vec(struct vector v1, struct vector v2) {
	int x, y, z;
	x = v1.y * v2.z - v1.z * v2.y;
	y = v1.z * v2.x - v1.x * v2.z;
	z = v1.x * v2.y - v1.y * v2.x;
	printf("������ ����: %d\t,%d\t,%d\n", x, y, z);
}

int main()
{
	struct vector  v1;
	struct vector v2;
	int opt;

	printf("ù��° ���͸� �Է��ϼ���: ");
	scanf_s("%d%d%d", &v1.x, &v1.y, &v1.z);
	printf("�ι�° ���͸� �Է��ϼ���: ");
	scanf_s("%d%d%d", &v2.x, &v2.y, &v2.z);
	printf("�Էµ� ù��° ���� %d\t,%d\t,%d\n", v1.x, v1.y, v1.z);
	printf("�Էµ� �ι�° ���� %d\t,%d\t,%d\n", v2.x, v2.y, v2.z);

	while (1) {
		printf("----------------------------------\n");
		printf("1. ������ ��\n");
		printf("2. ������ ��\n");
		printf("3. ������ ����\n");
		printf("4. ������ ����\n");
		printf("5. ���α׷� ����\n");
		printf("----------------------------------\n");
		printf("��� �Է�: ");
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
			printf("���α׷��� ����Ǿ����ϴ�.\n");
			break;
		default:
			printf("�߸��� �Է��Դϴ�.\n");
			break;
		}
		if (opt == 5) {
			break;
		}
	}
}