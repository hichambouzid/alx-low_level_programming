#include "lists.h"
/**
 * insert_nodeint_at_index - function
 *
 * @head: input
 * @idx: input
 * @n: number
 *
 * Return: function return struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *mv;
	unsigned int i;

	i = 0;
	if (*head == NULL && idx != 0)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	mv = *head;
	while (mv && i < (idx - 1))
	{
		i++;
		mv = mv->next;
	}
	if (!mv)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	else if (mv->next)
	{
		ptr->next = mv->next;
		mv->next = ptr;
	}
	else
		return (NULL);
	return (ptr);
}
