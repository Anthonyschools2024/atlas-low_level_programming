#include <stdlib.h>
#include "dog.h"

typedef struct s_dog {
    // Assuming dog_t has fields like name, age, breed, etc.
    char *name;
    int age;
    char *breed;
} dog_t;

void free_dog(dog_t *d) {
    if (d == NULL) {
        // If the pointer is NULL, nothing needs to be done.
        return;
    }

    // Freeing individual fields of the dog_t structure
    if (d->name!= NULL) {
        free(d->name); // Freeing the memory allocated for the name field
    }
    if (d->breed!= NULL) {
        free(d->breed); // Freeing the memory allocated for the breed field
    }

    // Freeing the memory allocated for the dog_t structure itself
    free(d);

    // Setting the pointer to NULL to avoid dangling pointers
    d = NULL;
}
