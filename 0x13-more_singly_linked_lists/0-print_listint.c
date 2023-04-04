#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t node_total;

while (h != NULL)

{
printf("%d\n", h->n);

node_total++;
h = h->next;
}
return (node_total);
}
