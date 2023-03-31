#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @str: Pointer to the string to be modified.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *p = str;

	/* Iterate through the string and convert each lowercase letter to upper */
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32; /* Subtract the difference */
		}

		p++;
	}

	return (str);
}

