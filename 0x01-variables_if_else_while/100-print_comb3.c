#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = 0; m < 9; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);

				if (n != 8 || (n == 8 && m != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');


	return (0);
}
