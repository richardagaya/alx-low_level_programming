#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added as the value of the new node
 * Return: pointer to the new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

