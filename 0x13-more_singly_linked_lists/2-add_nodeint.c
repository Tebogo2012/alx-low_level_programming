#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 * there linked list
 * @head: the head of a list.
 * @n: n element.
 *
 * Return: there address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
