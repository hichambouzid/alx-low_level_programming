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

	ptr = head;
	while (ptr->next)
	{
		free(ptr);
		ptr = ptr->next;
	}
	free(ptr);
}
