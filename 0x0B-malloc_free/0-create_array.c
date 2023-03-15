#include "main.h"
#include <stdlib.h>
/**
 * create_array - func that creates an array of chars,
 *@size:unsigned int
 *@c:char
 *Return: ptr to the arr, or NULL if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
