#include "main.h"
/**
 * _strcmp - compares two strings
 *@s1:string one
 *@s2:string two
 *Return:result
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		*s1++;
		*s2++;
	}
	return (0);
}
