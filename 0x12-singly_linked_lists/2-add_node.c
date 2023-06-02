#include "lists.h"

/**
 * add_node - add new node begining of list_t
 * @head: the pointer to structure
 * @str: the string
 * Return: adrres of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	newNode->len = length;
	if (*head != NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}
