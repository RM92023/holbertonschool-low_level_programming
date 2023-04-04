#include "lists.h"

/**
 * dlistint_len - Prints all the elements of a list.
 * @h: Head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
