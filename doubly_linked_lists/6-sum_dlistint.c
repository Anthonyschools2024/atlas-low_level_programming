#include "lists.h"

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
 
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: Sum of all the data (n) in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    /* Traverse the list and add up the values */
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
