#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index at which to insert the new node
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (!new_node || !h || !*h)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0) {
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
	} else {
		for (i = 0; i < idx && *h; i++)
			*h = (*h)->next;

		if (!*h)
			return NULL;

		new_node->next = (*h)->next;
		new_node->prev = *h;
		(*h)->next->prev = new_node;
		(*h)->next = new_node;
	}

	return new_node;
}
