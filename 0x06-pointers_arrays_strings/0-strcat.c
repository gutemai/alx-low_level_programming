#include "main,h"

/**
 *
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	n = 0;
	while (dest[i] != '\0')
	{	
		n++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	dest[n] != '\0';
	return (dest);
}

