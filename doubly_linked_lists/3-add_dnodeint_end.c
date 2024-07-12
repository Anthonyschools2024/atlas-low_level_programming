#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer value to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (!new_node) /* Check if memory allocation was successful */
        return NULL;

    new_node->n = n; /* Set the value of the new node */

    if (*head == NULL) { /* If the list is empty */
        new_node->next = NULL;
        new_node->prev = NULL;
        *head = new_node;
    } else { /* If the list has elements */
        new_node->next = NULL;
        new_node->prev = (*head)->prev;
        (*head)->prev->next = new_node;
        (*head)->prev = new_node;
    }

    return new_node;
}
