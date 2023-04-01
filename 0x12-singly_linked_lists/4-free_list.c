#include "lists.h"
#include<stdlib.h>
/**
 * free_list - function free nodes
 *
 * @head: input
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);

	}
}
