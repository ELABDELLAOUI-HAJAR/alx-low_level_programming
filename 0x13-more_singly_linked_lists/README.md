# Welcome to 0x13-more_singly_linked_lists directory where we will practice more about the minked lists in C.

In this directory we will use for all exercices the following struct : 

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
`typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;`

| task  | Description  |
| ----- | ------------ |
| 0-print_listint.c | A function that prints all the elements of a listint_t list. |
| 1-listint_len.c | A function that returns the number of elements in a linked listint_t list. |
| 2-add_nodeint.c | A function that adds a new node at the beginning of a listint_t list. |
| 3-add_nodeint_end.c | A function that adds a new node at the end of a listint_t list. |
| 4-free_listint.c | A function that frees a listint_t list. |
| 5-free_listint2.c | A function that frees a listint_t list and set the heas of the list to NULL. |
| 6-pop_listint.c | A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n) if lists is not empty and 0 otherwize. |
| 7-get_nodeint.c | A function that returns the nth node of a listint_t linked list or NULL if the node does not exist. |

