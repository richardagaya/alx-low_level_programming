#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad dest with null bytes if necessary */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

