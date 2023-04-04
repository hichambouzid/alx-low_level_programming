#include "lists.h"
/**
 * pop_listint - function remove a node
 *
 * @head: input
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;
	listint_t *vr;

	n = 0;
	if (head)
	{
		ptr = *head;
		if (ptr->next)
		{
			n = ptr->n;
			vr = ptr;
			ptr = ptr->next;
			free(vr);
		}
		*head = ptr;
	}
	return (n);
}
