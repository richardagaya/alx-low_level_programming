#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Pointer to the array of integers to be reversed.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	/* Swap the first and last input, then the second and second-to-last, etc. */
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

