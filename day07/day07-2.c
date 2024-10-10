#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
	double x = 0;
	double y = 0;
	double pi;
	int n=0;
	int count = 0, circle = 0;

	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;
		if (sqrt(pow(x, 2) + pow(y, 2)) < 1) {
			circle++;
		}
		pi = 4 * (double)circle / (double)count;
			if (count % 10000000 == 0) {
				printf("%d%%진행 . . 원주율 : %lf", count / 10000000, pi);
				n++;
				for (int j = 0; j < n / 5; j++) {
					printf("■");
				}
				for (int k = 0; k < 20 - (n / 5); k++) {
					printf("□");
				}
				printf("\n");
			}
	
	}
	
	
	
}