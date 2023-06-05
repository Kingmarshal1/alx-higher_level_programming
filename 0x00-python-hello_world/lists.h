#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linking the lists
 * @n: integer
 * @next: pointing to next node
 * Created by Chukwudike Igwe
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;/** listing the next */
} listint_t;

size_t print_listint(const listint_t *h);/** printing the list */
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);/** checking the cycle listing */

#endif /* LISTS_H */
