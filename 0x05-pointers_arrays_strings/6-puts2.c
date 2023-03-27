#include "main.h"
/**
 * puts2 - prints every other character of a string, starting
 * with the first character
 * @str: the giving string
 */
void puts2(char *str)
{
	int i = 0, length = 0;

	while (str[i++])
		length++;
	i = 0;
	while (i < length && str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
