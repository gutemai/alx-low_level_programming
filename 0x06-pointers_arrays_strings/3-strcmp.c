#include "main.h"
/**
 * _strcmp - compares two strings
 *@s1:string one
 *@s2:string two
 *Return:result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = s1[i] - s[2];

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
