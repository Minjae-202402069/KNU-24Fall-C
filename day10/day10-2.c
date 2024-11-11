#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NODE {
	char name[20];
	enum rank customerRank;
	int order_amount;
	int point;
	struct NODE* prev;
	struct NODE* next;
};

enum rank {
	platinum = 0,
	gold,
	silver,
	bronze,
	common

};

struct NODE* head = NULL;

struct NODE* create_node(char* name,enum rank customerRank, int order_amount,int point)
{
	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	strcpy_s(new_node->name, 20, name);
	new_node->customerRank = customerRank;
	new_node->order_amount = order_amount;
	new_node->point = point;
	new_node->prev = NULL;
	new_node->next = NULL;

	return new_node;
}

struct NODE* last_node()
{
	struct NODE* cur = head;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	return cur;
}

struct NODE* find_node_insert(enum rank customerRank, int order_amount, int point)
{
	struct NODE* prev = head;
	struct NODE* cur = head->next;
	if (cur == NULL) {
		return head;
	}

	while (cur != NULL) {
		
		if (cur->customerRank > customerRank) {
			return prev;  
		}

		else if (cur->customerRank == customerRank) {
			if (cur->order_amount < order_amount) {
				return prev;
			}

			else if (cur->order_amount == order_amount) {
				if (cur->point < point) {
					return prev;
				}
			}
		}
		prev = cur;
		cur = cur->next;
	}

	return prev;
}


void insert_node_priority(struct NODE* new_node)
{
	struct NODE* priority = find_node_insert(new_node->customerRank, new_node->order_amount, new_node->point);

	new_node->next = priority->next;
	if (priority->next != NULL) {
		priority->next->prev = new_node;
	}

	priority->next = new_node;
	new_node->prev = priority;
}

void insert_node_last(struct NODE* new_node)
{
	struct NODE* last = last_node();
	last->next = new_node;
}

void delete_node(char* name)
{
	struct NODE* cur = head->next; 
	struct NODE* temp;

	if (cur == NULL) {
		printf("리스트가 비어 있습니다.\n");
		return;
	}


	while (cur != NULL) {
		if (strcmp(cur->name, name) == 0) {
	
			if (cur->prev != NULL) {
				cur->prev->next = cur->next;
			}
			if (cur->next != NULL) {
				cur->next->prev = cur->prev;
			}

			temp = cur;
			cur = cur->next;
			free(temp);  
			printf("%s 고객이 삭제되었습니다.\n", name);
			return;
		}
		cur = cur->next; 
	}

	printf("%s 고객을 찾을 수 없습니다.\n", name);
}


void print_nodes()
{
	struct NODE* cur = head->next;
	printf("--------------------\n");
	while (cur != NULL) {
		printf("%s님의 랭크 : %d\n", cur->name, cur->customerRank);
		printf("%s님의 구매량 : %d\n", cur->name, cur->order_amount);
		printf("%s님의 포인트 : %d\n", cur->name, cur->point);
		printf("\n");
		cur = cur->next;
	}
	printf("--------------------\n");
}

int main()
{
	head = (struct NODE*)malloc(sizeof(struct NODE));
	head->next = NULL;

	int opt;
	int i = 1;
	char name[20];
	int point;
	int order_amount;
	int rank;

	while (1)
	{
		printf("\n");
		printf("1. 고객 추가\n");
		printf("2. 고객 정보 제거\n");
		printf("3. 고객 정보 수정\n");
		printf("4. 프로그램 종료\n");
		printf("번호 입력: ");
		scanf_s("%d", &opt);
		printf("\n");

		if (opt == 1) {
			printf("고객 이름 : ");
			scanf_s("%s", name, 20);

			printf("%s님의 등급 : ", name);
			scanf_s("%d", &rank);

			printf("%s님의 주문량 : ",name);
			scanf_s("%d", &order_amount);

			printf("%s님의 포인트 : ", name);
			scanf_s("%d", &point);

			insert_node_priority(create_node(name,rank,order_amount,point));
		}
		else if (opt == 2) {
			printf("삭제할 고객의 이름: ");
			scanf_s("%s", name, 20);
			delete_node(name);
		}
		else if (opt == 3) {
			printf("수정할 고객의 이름 : ");
			scanf_s("%s", name, 20);

			printf("고객 등급(0~4) : ");
			scanf_s("%d", &rank);

			printf("고객 구매량 : ");
			scanf_s("%d", &order_amount);

			printf("고객 포인트 : ");
			scanf_s("%d", &point);

			delete_node(name);
			insert_node_priority(create_node(name, rank, order_amount, point));
		}
		else if (opt == 4) {
			i = 0;
		}
		else {
			printf("잘못된 입력입니다.\n");
		}
		print_nodes();
		if (i == 0) {
			break;
		}
	}

	return 0;
}