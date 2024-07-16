#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in a hash table.
 * @key: Pointer to the key.
 * @size: Size of the hash table.
 *
 * This function uses the hash_djb2 function to generate a hash value
 * for the key and then calculates the index in the hash table where
 * the key-value pair should be stored.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Assuming hash_djb2 is defined elsewhere in your codebase */
    unsigned long int hash = hash_djb2(key);

    /* Calculate the index by taking the modulus of the hash value with the size */
    unsigned long int index = hash % size;

    return index;
}