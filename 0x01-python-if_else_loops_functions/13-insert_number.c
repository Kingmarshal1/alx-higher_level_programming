#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Created by Chukwudike Igwe
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));/** size of listing */
	if (new == NULL)
		return (NULL);
	new->n = number;/** new numbers */

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);/** returning new */
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;/** new next node */
	node->next = new;

	return (new);
}
