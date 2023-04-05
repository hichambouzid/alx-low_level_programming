#include "lists.h"
/**
 * delete_nodeint_at_index - function
 *
 * @head: input
 * @index: input
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *mv;
	unsigned int i;

	i = 0;
	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	else if (index != 0)
	{
		while (ptr && i < (index - 1))
		{
			i++;
			ptr = ptr->next;
		}
		if (ptr == NULL)
			return (-1);
	}
	mv = ptr->next;
	ptr->next = mv->next;
	free(mv);
	return (1);
}
