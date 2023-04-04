#include "lists.h"
/**
 * sum_listint - function add the sume of element in nodes
 *
 * @head: input
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int n;

	n = 0;
	if (head)
	{
		while (head)
		{
			n += head->n;
			head = head->next;
		}
	}
	return (n);
}
