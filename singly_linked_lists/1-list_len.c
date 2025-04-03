#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - calculate the number of elements in a linked list
 *
 * @h: pointer to head of linked list
 *
 * Return: Number of elements in linked list
 *
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
