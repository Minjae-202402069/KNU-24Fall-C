#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void fillRandom(int array[SIZE][SIZE]);
void printArray(int array[SIZE][SIZE]);
void movePointer(void* array);

int main()
{
	int array[SIZE][SIZE];

	fillRandom(array);
	printArray(array);
	movePointer(array);

	return 0;
}

void fillRandom(int array[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			array[i][j] = rand() % 21;
		}
	}
}

void printArray(int array[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
}

void movePointer(void* array)
{
	int move=0;
	int x=0, y=0;
	
	while (10 * x + y <= 99) {
		move = *((int*)array +(x*10 + y));
		printf("���� ��ġ ( %d , %d ) , �迭�� ��: %d\n",x,y,move);
		if (10 * x + y >= 99) {
			printf("�� �̻� �̵��� �� �����ϴ�.\n");
			printf("���� ��ġ ( %d , %d ) , �迭�� ��: %d\n", x, y, move);
		}
		x += move / 10;
		y += move % 10;
		if (y >= 10) {
			y -= 10;
			x += 1;
		}
		
	}
	
}