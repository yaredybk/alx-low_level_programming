#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a singly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long n = 0;

	while (1)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
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
