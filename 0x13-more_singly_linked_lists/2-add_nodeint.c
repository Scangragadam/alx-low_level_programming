#include "lists.h"

/**
 * add_nodeint - adds new node in the beginning of every linked list
 * @head: pointer to the first node into list
 * @n: specific data for inserting into new node
 * Return: pointer into new node, or NULL if failing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
