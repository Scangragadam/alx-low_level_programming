#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in listint_t list
 * @head: 1st node in linked list
 * Return: resulting the sum of them
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
