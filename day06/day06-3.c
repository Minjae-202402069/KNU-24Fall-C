<<<<<<< HEAD

#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "data.txt", "rt");

	int n1, n2, n3;
	while (fscanf_s(fp, "%d %d %d", &n1, &n2, &n3) != EOF) {
		printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
	}

	fclose(fp);

	return 0;
=======
=======
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
#include<stdio.h>
int main()
{
    FILE* fp = NULL;
    fopen_s(&fp, "data.txt", "rt");

    int n1, n2, n3;
    while (fscanf_s(fp, "%d %d %d", &n1, &n2, &n3) != EOF) {
        printf("n1 = %d, n2 = %d, n3=%d\n", n1, n2, n3);
    }

    fclose(fp);
    return 0;
<<<<<<< HEAD
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
=======
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
}