#include "main.h" 
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		putchar('\n'); /* print newline character */
		return;
	}
	putchar(*s); /* print current character */
	_puts_recursion(s + 1); /* recurse with next character */
}

