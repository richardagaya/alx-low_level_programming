#include "main.h"
#include <stdio.h>

/**
 * _puts - function thats prints  string
 * @str: - pointer to the string
 * Return: String and a new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
