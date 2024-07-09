#include "lists.h"
/**
 * add_nodeint - adds a node
 * Description - adds a new node to the singly linked list
 * @head: the head node passed to the function
 * @n: the integer that is added to the nodes memory
 * Return: new node address (success)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		new->next = temp;
		*head = new;
	}
	return (new);
}