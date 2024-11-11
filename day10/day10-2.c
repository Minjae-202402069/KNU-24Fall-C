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
		printf("����Ʈ�� ��� �ֽ��ϴ�.\n");
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
			printf("%s ���� �����Ǿ����ϴ�.\n", name);
			return;
		}
		cur = cur->next; 
	}

	printf("%s ���� ã�� �� �����ϴ�.\n", name);
}


void print_nodes()
{
	struct NODE* cur = head->next;
	printf("--------------------\n");
	while (cur != NULL) {
		printf("%s���� ��ũ : %d\n", cur->name, cur->customerRank);
		printf("%s���� ���ŷ� : %d\n", cur->name, cur->order_amount);
		printf("%s���� ����Ʈ : %d\n", cur->name, cur->point);
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
		printf("1. �� �߰�\n");
		printf("2. �� ���� ����\n");
		printf("3. �� ���� ����\n");
		printf("4. ���α׷� ����\n");
		printf("��ȣ �Է�: ");
		scanf_s("%d", &opt);
		printf("\n");

		if (opt == 1) {
			printf("�� �̸� : ");
			scanf_s("%s", name, 20);

			printf("%s���� ��� : ", name);
			scanf_s("%d", &rank);

			printf("%s���� �ֹ��� : ",name);
			scanf_s("%d", &order_amount);

			printf("%s���� ����Ʈ : ", name);
			scanf_s("%d", &point);

			insert_node_priority(create_node(name,rank,order_amount,point));
		}
		else if (opt == 2) {
			printf("������ ���� �̸�: ");
			scanf_s("%s", name, 20);
			delete_node(name);
		}
		else if (opt == 3) {
			printf("������ ���� �̸� : ");
			scanf_s("%s", name, 20);

			printf("�� ���(0~4) : ");
			scanf_s("%d", &rank);

			printf("�� ���ŷ� : ");
			scanf_s("%d", &order_amount);

			printf("�� ����Ʈ : ");
			scanf_s("%d", &point);

			delete_node(name);
			insert_node_priority(create_node(name, rank, order_amount, point));
		}
		else if (opt == 4) {
			i = 0;
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
		}
		print_nodes();
		if (i == 0) {
			break;
		}
	}

	return 0;
}