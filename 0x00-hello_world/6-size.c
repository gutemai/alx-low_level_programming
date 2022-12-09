#include <stdio.h>
/**
 * main - entry
 * return: 0
 */
int main(void)
{	char m;
	int n;
	long int o;
	long long int p;
	float q;

	printf("Size of a char: %i byte(s)\n", sizeof(m));
	printf("Size of an int: %i byte(s)\n", sizeof(n));
	printf("Size of a long int: %i byte(s)\n", sizeof(o));
	printf("Size of a long long int: %i byte(s)\n", sizeof(p));
	printf("Size of a float: %i byte(s)\n", sizeof(q));
	return (0);
}
