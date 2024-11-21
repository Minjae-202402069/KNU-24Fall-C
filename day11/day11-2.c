#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	int start, end,n;
	double dx, sum = 0;

	printf("������ ���� ���� �Է��ϼ���: ");
	scanf_s("%d", &start);
	printf("������ �� ���� �Է��ϼ���: ");
	scanf_s("%d", &end);
	printf("������ �ִ� ������ �Է��ϼ���(2^n): ");
	scanf_s("%d", &n);

	

    for (int k = 0; k <= n; k++) {
        int steps = pow(2, k);  // 2^k ����
        dx = (double)(end - start) / steps;  // �� ������ �غ�

        sum = 0;  

        for (int i = 0; i < steps; i++) {
            // *����* double x = pow(start + i * dx,2)+1;  
            double x = -log10(1 / (start + i * dx)) + sin(start + i * dx); // x = �Լ��� ���� , pow���� �Լ� ����
            sum += x * dx;
        }
            
        printf("���� %10d, ���� ���: %.6f\n", steps, sum);
    }

    return 0;
}