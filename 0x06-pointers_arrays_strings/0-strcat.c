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
	int dest_len = strlen(dest);
	int scr_len = strlen(scr);

	for (i = 0; dest[i] != '\0'; i++)

	j = 0;

	while (scr[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

