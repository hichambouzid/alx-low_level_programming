#include "lists.h"
/**
 * free_listint - function free the memory used by nodes
 *
 * @head: node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head->next)
	{
		ptr = head;
		free(ptr);
		head = head->next;
	}
}
