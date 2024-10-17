#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	int num = 0;
	char temp;
	char* start;
	char* end;
	printf("문자열을 입력하세요: ");
	scanf_s("%s", &arr, sizeof(arr));

	num = strlen(arr);

	start = ((char*)arr);
	end = ((char*)arr)+(num-1);
	
	for (int i = 0; i < num/2; i++) {
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
	printf("%s", arr);

	return 0;
}