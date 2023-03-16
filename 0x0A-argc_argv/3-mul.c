#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two num.
 * @argc:number of args
 *@argv:array of args
 *Return:0 if no error,else 1.
 *
 */
int main(int argc, char *argv[])
{
	int product, num1, num2;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		product = (atoi(argv[2]) * atoi(argv[1]));

		printf("%d\n" product);
		return (0);

	}
}
