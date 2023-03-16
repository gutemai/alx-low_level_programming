#include <stdio.h>
#include "main.h"

/**
 * main - program prints all args it receives
 * @argc: number of args
 * @argv: array of args
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
