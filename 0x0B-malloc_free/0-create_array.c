#include "main.h"
/**
 * create_array - func that creates an array of chars,
 *@size:unsigned int
 *@c:char
 *Return: ptr to the arr, or NULL if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
