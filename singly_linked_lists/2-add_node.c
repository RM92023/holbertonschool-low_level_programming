#include "lists.h"
#include <stdlib.h>
/**
 * add_node - this function return numbers of nodes or elements
 * @head: the head of the list
 * @str: the string
 *
 * Return: the number of nodes or elements
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
if ((head == NULL) || (str == NULL))
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = *head;
*head = new;
return (new);
}
