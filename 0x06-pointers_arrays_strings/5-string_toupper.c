#include "main.h"
/**
 * string_toupper -lowercase letters of a string to uppercase.
 *
 *@str:str to be changed
 *
 *Return:str that changed to uppercase
 *
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
