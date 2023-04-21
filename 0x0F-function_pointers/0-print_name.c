#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name using the given function pointer
 * @name: name to be printed
 * @f: pointer to a function that prints the name in a particular format
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
