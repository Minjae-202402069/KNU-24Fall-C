#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	int snum;
	char name[100];
	int score;
};

int main()
{	
	struct Student person[2];
	int n, i, sum = 0;
	
	person[0]. snum = 1111;
	strcpy_s(person[0]. name, 100, "철수");
	person[0]. score = 100;

	printf("%d %s %d\n", person[0].snum, person[0].name, person[0].score);

	/*
	int* student;
	int* score;
	char** name;
	
	printf("학생 수 입력: ");
	scanf_s("%d", &n);
	
	student = (int*)malloc(sizeof(int) * n);
	name = (char**)malloc(sizeof(char*) * n);
	score = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		name[i] = (char*)malloc(100 * sizeof(char));
	}


	
	for (i = 0; i < n; i++) {
		printf("학번 입력: ");
		scanf_s("%d", &student[i]);
	
		printf("이름 입력: ");
		scanf_s("%s", name[i],100);

		printf("점수 입력: ");
		scanf_s("%d", &score[i]);
		
		printf("\n");
	}
	

	for (i = 0; i < n; i++) {
		printf("학번: %d 이름: %s 점수: %d\n",student[i],name[i],score[i]);

		sum += score[i];
	}
	printf("평균: %d\n", sum / n);

	free(student);
	free(score);
	for(i = 0; i < n; i++){
		free(name[i]);
	}
	*/

	return 0;
}