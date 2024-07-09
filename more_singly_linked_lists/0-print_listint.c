#include "lists.h"
/**
 * print_listint - prints the elements of the current node
 * Description - starts at the head node and prints the
 * current nodes element and then goes to the next node
 * @h: the head node that is passed to the function
 * Return: node count (success)
*/
size_t print_listint(const listint_t *h)
{
	int n_count = 0; /* node counter */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_count++;
		h = h->next;
	}
	return (n_count);
}