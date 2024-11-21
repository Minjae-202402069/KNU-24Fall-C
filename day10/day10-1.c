#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
	int score;
	char name[20];
	struct NODE* link;
};

struct NODE* head;

struct NODE* create_node(char* name,int score)
{
	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	strcpy_s(new_node->name, 20, name);
	new_node->score = score;
	new_node->link = NULL;
}

struct NODE* last_node()
{
	struct NODE* cur = head;
	while (cur->link != NULL) {
		cur = cur->link;
	}
	return cur;
}

struct NODE* find_node_insert(int score)
{
	struct NODE* prev = head;
	struct NODE* cur = head->link;
	if (cur == NULL) return head;


	while (cur != NULL) {
		if (cur->score >= score) {
			if (cur->link == NULL) return cur;

			prev = cur;
			cur = cur->link;
		}
		else {
			return prev;
		}
	}
}


void insert_node_priority(struct NODE* new_node)
{
	struct NODE* priority = find_node_insert(new_node->score);
	new_node->link = priority->link;
	priority->link = new_node;
}

void insert_node_last(struct NODE* new_node)
{
	struct NODE* last = last_node();
	last->link = new_node;
}

void print_nodes()
{
	struct NODE* cur = head->link;
	printf("--------------------\n");
	while (cur != NULL) {
		printf("%s : %d\n", cur->name, cur->score);
		cur = cur->link;
	}
	printf("--------------------\n");
}

int delete_node(char* name)
{
	struct NODE* prev = head;
	struct NODE* cur = head->link;
	while (cur != NULL) {
		if (strcmp(name, cur->name) == 0) {
			prev->link = cur->link;
			free(cur);
			return 1;
		}

		prev = cur;
		cur = cur->link;
	}
	return 0;
}


int main()
{	
	head = (struct NODE*)malloc(sizeof(struct NODE));
	head->link = NULL;

	int opt;
	int i = 1;
	char name[20];
	int score;


	while (1)
	{	
		printf("\n");
		printf("1. 학생의 성적을 입력\n");
		printf("2. 학생 정보 제거\n");
		printf("3. 프로그램 종료\n");
		printf("번호 입력: ");
		scanf_s("%d", &opt);
		printf("\n");

		if (opt == 1) {
			printf("학생 이름 : ");
			scanf_s("%s", name, 20);

			printf("%s의 점수 : ",name);
			scanf_s("%d", &score);

			insert_node_priority(create_node(name, score));
		}
		else if (opt == 2) {
			printf("삭제할 학생의 이름 : ");
			scanf_s("%s", name, 20);
			delete_node(name);
		}
		else if (opt == 3) {
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