#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to head of list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
 {
      int node_count; /* count nodes */

      while (h != NULL) /* iterate through until null */ 
{
        node_count++; /* increment counter by 1 */
        h = h->next; /* move to the next node */
    }

    return node_count; /* return the number of nodes */
}