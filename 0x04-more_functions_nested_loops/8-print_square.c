#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square pattern with #
 * @size: he number of patterns to be printed
 *
 * Return: does not return anything
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}

}

