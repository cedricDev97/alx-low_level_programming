#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t.
 * @head: pointer to head element.
 * @str: string to be duplicated
 *
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *lastNode;
size_t nchar;
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
	return (NULL);

newNode->str = strdup(str);

for (nchar =0; str[nchar]; nchar++)
	;

newNode->len = nchar;
newNode->next = NULL;
lastNode = *head;

if (*lastNode == NULL)
{
	*head = newNode;
}
else
{

while (lastNode->next != NULL)
	lastNode = lastNode->next;
lastNode->next = newNode;
}

return (*head);

}
