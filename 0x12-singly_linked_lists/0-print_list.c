#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
/**
 * print_list - function print a linked list
 *
 * @h: the head of linked list
 *
 * Return: size of element of linked list
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		num++;
		h = h->next;
	}
	return (num);
}
