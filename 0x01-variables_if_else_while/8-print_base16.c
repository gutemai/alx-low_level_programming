#include <stdio.h>
/**
 * main - entry point
 *
 * Return:Always 0 (success)
 */

int main(void)
{
	char c;

	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
