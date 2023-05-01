#include "lists.h"

/**
 * list_len - returns the number of nodes in a linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

