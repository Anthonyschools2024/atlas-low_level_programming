#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointer to previous node
 * @next: pointer to next node
 *
 * Description: doubly linked list structure
 *
 */

typedef struct dlistint_s
{
       int n;
       struct dlistint_s *prev;
       struct dlistint_s *next;
} dlistint_t;

int _putchar(char c);
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
size_t print_dlistint_backward(const dlistint_t *h);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

#endif