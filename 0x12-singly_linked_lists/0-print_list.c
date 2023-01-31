#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a singly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	int i = 1;

	while (i)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		if (h->next == NULL)
			i = 0;
		else
			h = h->next;
		n++;
	}
	return (n);
}
