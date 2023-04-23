#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: numbers printed
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nms;
	unsigned int index;

	va_start(nms, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nms, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(nms);
}
