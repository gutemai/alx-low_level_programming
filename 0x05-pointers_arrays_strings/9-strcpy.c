#include "main.h"
/**
 *_strcpy - function that copies to string
 *@dest:pointer to char
 *@src:pointer to source char
 *Return:pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

		dest[i] = '\0';

	return (dest);
}
