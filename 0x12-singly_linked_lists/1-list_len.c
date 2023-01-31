#include "lists.h"

/**
 * print_list - returns the number of elements in a linked list_t list.
 * @h: pointer to a singly linked list
 * Return: the number of elements in a linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (1)
	{
		n++;
		if (h->next == NULL)
		{
			break;
		}
		else
		{
			h = h->next;
		}
	}
	return (n);
}
