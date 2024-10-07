<<<<<<< HEAD

#include <stdio.h>

=======
#include<stdio.h>
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
=======
#include<stdio.h>
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
int main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "data.txt", "wt");

	fprintf(fp, "%d %d %d\n", 100, 200, 300);
	fprintf(fp, "%d %d %d\n", 400, 500, 600);

	fclose(fp);
<<<<<<< HEAD
<<<<<<< HEAD

=======
	
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
=======
	
>>>>>>> 51fea11270dc5a1d2ac5dfd5d624c6a6139e8c5b
	return 0;
}