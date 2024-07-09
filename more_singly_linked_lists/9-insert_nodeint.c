#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a specific
 * position in the singly linked list
 * Description - makes a new node with data passed to it and
 * places it in the given position in the singly linked list
 * @head: the head node passed to the funciton
 * @idx: the position in the linked list for the new node
 * @n: data to be passed to the new node
 * Return: address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	listint_t *temp2;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (temp == NULL)
			return (NULL);
	}

	temp2 = temp->next;
	temp->next = new;
	new->next = temp2;
	return (new);
}