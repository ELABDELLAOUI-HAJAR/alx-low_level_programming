#include "lists.h"

/**
 * _rc - reallocates a memory block using malloc and free
 * @o: a pointer to the old list.
 * @s: the size of the new list (is greater than the old one by 1).
 * @n: new node to add to the old list.
 * Return: A pointer to the new list.
 */
const listint_t **_rc(const listint_t **o, unsigned int s, const listint_t *n)
{
	const listint_t **new;
	unsigned int i = 0;

	new = malloc(s * sizeof(listint_t *));
	if (!new)
	{
		free(o);
		exit(98);
	}
	while (i < s - 1)
	{
		new[i] = o[i];
		i++;
	}
	new[i] = n;
	free(o);
	return (new);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **UniqueList = NULL;
	size_t nbrUniqueNodes = 0, i = 0;

	if (!head)
		return (0);
	while (head)
	{
		for (i = 0; i < nbrUniqueNodes; i++)
		{
			if (head == UniqueList[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(UniqueList);
				return (nbrUniqueNodes);
			}
		}
		nbrUniqueNodes++;
		UniqueList = _rc(UniqueList, nbrUniqueNodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(UniqueList);
	return (nbrUniqueNodes);
}
