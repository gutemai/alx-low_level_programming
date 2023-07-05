#include "main.h"
/**
 *factorial - funct returns the factorial of a given number.
 *@n:agiven integer
 *Return:-1 if n < 0 1 if n=0 and if other  factial num.
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if else(n = 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
