#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}

