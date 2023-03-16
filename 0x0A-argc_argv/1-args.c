#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 *@argc:numbers of args
 *@argv:arrays of args
 *Return:always 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
