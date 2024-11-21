#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	int start, end,n;
	double dx, sum = 0;

	printf("적분할 시작 값을 입력하세요: ");
	scanf_s("%d", &start);
	printf("적분할 끝 값을 입력하세요: ");
	scanf_s("%d", &end);
	printf("시행할 최대 구간을 입력하세요(2^n): ");
	scanf_s("%d", &n);

	

    for (int k = 0; k <= n; k++) {
        int steps = pow(2, k);  // 2^k 구간
        dx = (double)(end - start) / steps;  // 각 구간의 밑변

        sum = 0;  

        for (int i = 0; i < steps; i++) {
            // *예시* double x = pow(start + i * dx,2)+1;  
            double x = -log10(1 / (start + i * dx)) + sin(start + i * dx); // x = 함수의 높이 , pow에서 함수 설정
            sum += x * dx;
        }
            
        printf("구간 %10d, 적분 결과: %.6f\n", steps, sum);
    }

    return 0;
}