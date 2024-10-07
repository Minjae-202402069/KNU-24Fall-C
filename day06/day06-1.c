<<<<<<< HEAD

#include<stdio.h>
#include<stdlib.h>

struct NODE {
	int data;
	struct NODE* link;
=======
=======
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE* link;
<<<<<<< HEAD
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
=======
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
};

struct NODE* head = NULL;

<<<<<<< HEAD
<<<<<<< HEAD
struct NODE* create_node(int data)
{
	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	new_node->data = data;
	new_node->link = NULL;

	return new_node;
}

void print_nodes()
{
	struct NODE* cur = head->link;
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->link;
	}
}

struct NODE* find_node(int value)
{
	struct NODE* cur = head->link;
	while (cur != NULL) {
		if (cur->data == value) return cur;

		cur = cur->link;
	}
	return NULL;
}

int delete_node(int value)
{
	struct NODE* prev = head;
	struct NODE* cur = head->link;
	while (cur != NULL) {
		if (cur->data == value) {
			prev->link = cur->link;
			free(cur);
			return 1;
		}

		prev = cur;
		cur = cur->link;
	}
	return 0;
}

struct NODE* last_node()
{
	struct NODE* cur = head;
	while (cur->link != NULL) {
		cur = cur->link;
	}
	return cur;
}

void insert_node_last(struct NODE* new_node)
{
	struct NODE* last = last_node();
	last->link = new_node;
}

int main()
{
	head = (struct NODE*)malloc(sizeof(struct NODE));
	head->link = NULL;

	for (int i = 1; i < 6; i++) {
		insert_node_last(create_node(i));
	}
	printf("노드 추가\n");
	print_nodes();

	printf("중간 노드 삭제\n");
	delete_node(3);
	print_nodes();

	return 0;
}

=======
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
struct NODE* create_node(int data) {
    struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}
<<<<<<< HEAD

=======
//...
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b

struct NODE* last_node() {
    struct NODE* cur = head;
    while (cur->link != NULL) {
        cur = cur->link;
    }
    return cur;
}

void insert_node_last(struct nODE* new_node) {
    struct NODE* last = last_node();
    last->link = new_node;
}

void print_nodes() {
    struct NODE* cur = head->link;
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->link;
    }
}

int delete_node(int value) {
    struct NODE* prev = head;
    struct NODE* cur = head->link;

    while (cur != NULL) {
        if (cur->data == value) {
            prev->link = cur->link;
            free(cur);
            return 1;
        }
        prev = cur;
        cur = cur->link;
    }
}



int main()
{

    head = (struct NODE*)malloc(sizeof(struct NODE));
    head->link = NULL;

    insert_node_last(create_node(1));
    insert_node_last(create_node(2));
    insert_node_last(create_node(3));
    insert_node_last(create_node(4));
    insert_node_last(create_node(5));

    print_nodes();

    delete_node(3);

    print_nodes();

    return 0;
}


<<<<<<< HEAD
=======


>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
