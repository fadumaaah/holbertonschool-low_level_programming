#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of list_t
 *
 * @h: head of linked lists
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("%d ", h->data);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
