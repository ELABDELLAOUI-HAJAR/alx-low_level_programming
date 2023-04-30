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

