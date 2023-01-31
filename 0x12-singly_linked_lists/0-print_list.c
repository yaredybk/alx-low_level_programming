#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a singly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (1)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
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
