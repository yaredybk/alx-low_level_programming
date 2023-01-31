#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a singly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
