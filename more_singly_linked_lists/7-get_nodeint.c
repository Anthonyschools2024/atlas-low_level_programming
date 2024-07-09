#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node in the list
 * Description - gets passed the head node and an index node
 * will return the nth node back to the main function
 * @head: the head node passed as an argument
 * @index: the place in the list that will be returned
 * Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count;

	while (head != NULL)
	{
		for (count = 0; count < index; count++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
		return (temp);
	}
	return (NULL);
}