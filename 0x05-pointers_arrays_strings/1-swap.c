#include "main.h"

/**
 * swap_int  - swap the value of 2 int
 * @a:first int
 * @b:second int
 * return:0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
