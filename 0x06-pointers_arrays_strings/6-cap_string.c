#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @str: Pointer to the string to be modified.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	char *p = str;

	/* Iterate through the string and capitalize the first letter  */
	while (*p != '\0')
	{
		/* Capitalize the first letter of each that follows a separator */
		if (*p >= 'a' && *p <= 'z' &&
		    (*(p - 1) == ' ' || *(p - 1) == '\t' || *(p - 1) == '\n' ||
		     *(p - 1) == ',' || *(p - 1) == ';' || *(p - 1) == '.' ||
		     *(p - 1) == '!' || *(p - 1) == '?' || *(p - 1) == '\"' ||
		     *(p - 1) == '(' || *(p - 1) == ')' || *(p - 1) == '{' ||
		     *(p - 1) == '}'))
		{
			*p -= 32; /* Subtract the difference between lowercase and uppercase */
		}

		p++;
	}

	return (str);
}

