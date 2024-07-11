#include <stdio.h>
#include "list.h"

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
