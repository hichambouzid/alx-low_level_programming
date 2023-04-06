#include "lists.h"
/**
 * reverse_listint - function revers nodes
 *
 * @head: input
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *mv;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr = *head;
	if (!ptr->next)
		return (ptr);
	tmp = NULL;
	while (ptr)
	{
		mv = ptr->next;
		ptr->next = tmp;
		tmp = ptr;
		ptr = mv;
	}
	*head = tmp;
	return (*head);
}
