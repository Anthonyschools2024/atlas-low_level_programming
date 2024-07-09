#include "lists.h"
/**
 * listint_len - counts the number of elements in a linked list
 * Description - counts the number of nodes in a singly
 * linked list
 * @h: the head node passed to the function
 * Return: element count (success)
*/
size_t listint_len(const listint_t *h)
{
	int el_count = 0; /* element counter */

	while (h != NULL)
	{
		el_count++;
		h = h->next;
	}
	return (el_count);
}