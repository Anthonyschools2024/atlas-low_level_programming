#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}