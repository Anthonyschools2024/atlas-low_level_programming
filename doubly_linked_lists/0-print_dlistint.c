#include "list.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h) {
    const dlistint_t *current = h;
    size_t count = 0;

    while (current != NULL) {
        printf("%d\n", current->n); // Print the value of the node
        current = current->next; // Move to the next node
        count++; // Increment the counter
    }

    return count; // Return the total number of nodes
}