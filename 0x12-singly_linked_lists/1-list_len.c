#include "lists.h"
#include<stddef.h>
#include<stdio.h>
/**
 * list_len - function count the number of a nodes
 *
 * @h: typedef
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t number;

	number  = 0;
	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
