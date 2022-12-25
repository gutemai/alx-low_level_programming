#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets10 times in lower case
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
