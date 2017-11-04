#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main()
{
	int i = 0;
	printf("Numeri da %d a %d:\n", i, MAX);

	for (i=0; i <= MAX; i++)
	{	
		printf("%d\n", i);
	}

	return 0;
}