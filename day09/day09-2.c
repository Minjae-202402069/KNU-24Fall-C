#include <stdio.h>

struct product {
	int ID;
	char ch[20];
	int price;
};

void printProduct(struct product pd) {
	printf("��ǰ ID : %d\n",pd.ID);
	printf("��ǰ�� : %s\n",pd.ch);
	printf("���� : %d\n",pd.price);
}

int main()
{
	struct product pd[5];
	int i,j;
	for (i = 0; i < 5; i++) {
		printf("��ǰ ������ �Է��ϼ���. (�Է� �ߴ��� id�� 0 �Է�\n");
		printf("��ǰ ID : ");
		scanf_s("%d", &pd[i].ID);
		if (pd[i].ID == 0) {
			break;
		}
		printf("��ǰ�� : ");
		scanf_s("%s", pd[i].ch,sizeof(pd[i].ch));
		printf("���� : ");
		scanf_s("%d", &pd[i].price);
	}
	printf("<< �Էµ� ��ǰ ��� >>\n");

	for (j = 0; j < i; j++) {
		printProduct(pd[j]);	
	}
}