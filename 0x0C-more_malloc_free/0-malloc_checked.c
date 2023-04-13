#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - allocates all memory using malloc.
  * @b: size of the memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

