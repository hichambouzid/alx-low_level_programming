#include "lists.h"
/**
 * free_listint2 - free the list
 *
 * @head: list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *vr;

	vr = *head;
	if (vr)
	{
		while (vr->next)
		{
			ptr = vr;
			free(ptr);
			vr = vr->next;
		}
		free(vr);
	}
	head  = NULL;
}
