#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a:an array of integer
 *@n:the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;

	}
}
