#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - function that frees a listint_t list.
 *
 * @h: list.
 *
 * Return: returns the number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *l_node;
	size_t str_len;
	int l = 1;

	if (!h || !*h)
		return (0);

	l_node = find_listint_loop_fl(*h);
	str_len = 0;
	while ((*h != l_node || l) && *h != NULL)
	{
		str_len++;
		next = (*h)->next;
		if (*h == l_node && l)
		{
			if (l_node == l_node->next)
			{
				free(*h);
				break;
			}
			str_len++;
			next = next->next;
			free((*h)->next);
			l = 0;
		}
		free(*h);
		*h = next;
	}
	*h = NULL;
	return (str_len);
}
