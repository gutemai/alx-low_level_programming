#include "main,h"

/**
 * _strcat - concatenates the 2 string
 * @dest:string concatenate to
 * @src: string concatenated from
 * Return:pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len++] = src[i];
	}
	dest[len++] = '\0';

	return (dest);
}

