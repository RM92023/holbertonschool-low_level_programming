#include "lists.h"
/**
 * add_node_end - add a node to the end of the list
 *
 * @head: the head of the list
 * @str: the name of the node
 * Return: true if the node was added to the end of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
/* create new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
/* fill new node */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
/* add new node to end of list */
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (new_node);
}
