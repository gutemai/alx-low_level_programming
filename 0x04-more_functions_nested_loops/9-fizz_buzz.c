#include <stdio.h>
#include "main.h"

/**
 * main - print num from 1 - 100 ,but instead of mult,
 *       of 3 Fizz, mult of 5 Buzz, and Mult of
 *        both 3 and 5 FizzBuzz.
 *Return:0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i < 100)

		printf(" ");
	}

	printf("\n");
}
