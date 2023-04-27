# In this directory we will practice about the linked Lists

we will use the following List structure in this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
`typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;`

| task	| Description |
| ----- | ----------- |
| 0-print_list.c | A function that prints all the elements of a list_t list.<br/>- if str is NULL we will print [0] (nil).<br/> - The print format of element is [len] str\n  |
| 1-list_len.c | A function that returns the number of elements in a linked list_t list. |
