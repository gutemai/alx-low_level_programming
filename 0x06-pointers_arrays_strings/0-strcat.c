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
	int j;

	for (i = o; dest[i] != '\0'; i++)
		i--;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i--] = '\0';

	return (dest);
}

