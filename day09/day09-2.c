#include <stdio.h>

struct product {
	int ID;
	char ch[20];
	int price;
};

void printProduct(struct product pd) {
	printf("상품 ID : %d\n",pd.ID);
	printf("상품명 : %s\n",pd.ch);
	printf("가격 : %d\n",pd.price);
}

int main()
{
	struct product pd[5];
	int i,j;
	for (i = 0; i < 5; i++) {
		printf("상품 정보를 입력하세요. (입력 중단은 id에 0 입력\n");
		printf("상품 ID : ");
		scanf_s("%d", &pd[i].ID);
		if (pd[i].ID == 0) {
			break;
		}
		printf("상품명 : ");
		scanf_s("%s", pd[i].ch,sizeof(pd[i].ch));
		printf("가격 : ");
		scanf_s("%d", &pd[i].price);
	}
	printf("<< 입력된 상품 목록 >>\n");

	for (j = 0; j < i; j++) {
		printProduct(pd[j]);	
	}
}