#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of listint_t list.
 * @head: pointer of first element.
 * @n: elements to be added.
 *
 * Return: address of new element or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
	return (NULL);
temp->next = *head;
temp->n = n;

*head = temp;

return (*head);
}
