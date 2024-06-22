#include <stdlib.h>
#include <stdio.h>

typedef struct dog {
    // Assuming the struct has fields like name, age, etc.
    char *name;
    int age;
} dog_t;

void free_dog(dog_t *d) {
    if (d == NULL) {
        fprintf(stderr, "Error: Attempted to free a null pointer.\n");
        exit(EXIT_FAILURE); // Exit the program with failure status
    }

    // Freeing dynamically allocated memory within the struct
    if (d->name!= NULL) {
        free(d->name);
    }

    // Freeing the struct itself
    free(d);

    // No return statement needed; function returns control to caller implicitly
}
