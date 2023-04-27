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
| 2-add_node.c | A function that adds a new node at the beginning of a list_t list.<br/> 1/ Create a pointer to the struct. <br/> 2/ Allocate space to That element.<br/> 3/ if the allocation passes avec success:<br/> - we duplicate the giving string into str of our new element. <br/> -Then puts the length of the str into len. <br/> - Then points the next of our new element to the actual head of the list. <br/>- points the head of the list to the new element.<br/> 4- else if allocation fails we returns NULL. |

