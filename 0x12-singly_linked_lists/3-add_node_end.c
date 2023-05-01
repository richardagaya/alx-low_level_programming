#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: string to be added as a new node
 *
 * Return: pointer to the head of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (*head);
}

