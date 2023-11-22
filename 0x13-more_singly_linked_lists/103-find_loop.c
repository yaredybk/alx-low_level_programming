#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - function that finds the loop in a linked list.
 *
 * @head: linked list to search.
 *
 * Return: returns returns the address of node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *end;

	if (!head)
		return (NULL);
	end = head->next;
	while (end != NULL)
	{
		if (end == end->next)
			return (end);
		p = head;
		while (p != end)
		{
			if (p == end->next)
				return (end->next);
			p = p->next;
		}
		end = end->next;
	}
	return (NULL);
}
