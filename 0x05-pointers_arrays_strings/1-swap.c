#include "main.h"

/**
 * swap_int - take in two integers and swap them
 * @author Anisah
 * @a: swaps and stores address of b
 * @b: swaps and stores adress of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int swap;
int change = *b;
*b = *a;
*a = change;
}
