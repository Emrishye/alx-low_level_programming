#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elemntent of linked lsit
 * @h:pinter to list_t list
 *
 * Return: the num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 1;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;

	}
	return (count);
}
