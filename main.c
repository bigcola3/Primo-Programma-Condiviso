#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

int main()
{
	int i = 0;
	printf("Numeri da %d a %d:\n", i, MAX);

	for (i=0; i <= MAX; i++)
	{	
		printf("%d\n", i);
	}

	printf("fine");

	return 0;
}
