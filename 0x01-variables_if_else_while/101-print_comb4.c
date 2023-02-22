#include <stdio.h>
/**
 *main - Prints 3 combination of numbers
 *
 *Return: Always (Success)
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = c + 1; i <= '9'; i++)
		{
			for (k = i + 1; k <= '9'; k++)
			{

				putchar(c);
				putchar(i);
				putchar(k);

				if (c != '7')
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
