#include "main.h"
#include <stdio.h>
/**
 * print_array - print numbers of elements of array
 *@a:array
 *@n:number of values
 * Return:nothing
 */
void print_array(int *a, int n)
{
	int y = 0;

	for (y = 0; y < n; y++)
	{
		printf("%d", a[i]);
		if (y < n - 1)
			printf(",");
	}

	printf("\n");
}
