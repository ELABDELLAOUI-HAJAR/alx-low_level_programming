#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer the memory area
 * @to: the pointer to the value to be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
