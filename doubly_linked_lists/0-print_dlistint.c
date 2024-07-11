#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h) 
{
       int node_count = 0; /*node counter*/
  
      while (h != NULL) /* iterate through the list until null */
{
        printf("%d\n", h->n); /* Print the value of the node */
        node_count++; /* increment counter by 1 */
        h = h->next; /* move to next node in list */
    }

    return (node_count); /*  Return the total number of nodes */

}
