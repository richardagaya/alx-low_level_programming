#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints frizz for multiple of 3,buzz for multiples of 5
 * and fizzbuzz for multiples of both 3 and 5
 *
 * Return: returns always 0
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (!(i == 100))
				printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - calls the function fizz_buzz
 *
 * Return: always zero
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
