#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a:an array of integer
 *@n:the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i
	int temp;

	n = n - 1;
	for (i = 0;  i < n ; i++)
	{
		temp = a[i];
		a[n] = a[i];
		a[n] = temp;
		n--;

	}
}
