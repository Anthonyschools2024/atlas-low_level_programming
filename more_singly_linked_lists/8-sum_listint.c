#include "lists.h"
/**
 * sum_listint - adds all data in the linked list
 * Description - goes node by node and adds all of the
 * data in the singly linked list together
 * @head: the head node pass to the function
 * Return: res (success)
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int res = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		res += temp->n;
	}
	return (res);
}