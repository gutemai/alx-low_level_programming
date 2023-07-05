#include "main.h"
/**
 * cap_string -capitalizes all words of a string
 *@str:the str to be cap.
 *
 *Return:ptr to cap.
 *
 */
char *cap_string(char *str)
{
	char *ptr = str;

	int capitalize = 1;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z' && capitalize)
		{
			*ptr -= 32;
			capitalize = 0;
		}
		else if (*ptr == ' ' ||
		*ptr == '\t' ||
		*ptr == '\n' ||
		*ptr == ',' ||
		*ptr == ';' ||
		*ptr == '.' ||
		*ptr == '!' ||
		*ptr == '?' ||
		*ptr == '"' ||
		*ptr == '(' ||
		*ptr == ')' ||
		*ptr == '{' ||
		*ptr == '}')
		{
			capitalize = 1;
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			capitalize = 0;
		}
		ptr++;
	}
	return (str);
}
