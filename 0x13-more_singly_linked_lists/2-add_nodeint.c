#include "lists.h"
/**
 * add_nodeint - function add a node
 *
 * @head: typedef
 * @n: element
 *
 * Return: structur typedef
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
