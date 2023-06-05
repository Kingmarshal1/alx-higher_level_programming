#include "lists.h"

/**
 * check_cycle - checking if a linking lists contain a cycle
 * @list: linked list to checking
 * Created by Chukwudike Igwe
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;/** listing integer list */

	if (!list)
		return (0);/** returning 0 */

	while (slow && fast && fast->next)
	{
		slow = slow->next;/** slow next */
		fast = fast->next->next;
		if (slow == fast)
			return (1);/** returning 1 */
	}

	return (0);
}
