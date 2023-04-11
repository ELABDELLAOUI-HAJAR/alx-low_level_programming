#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _strlen - length of a string
 * @str: the giving string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * wordCount - counts the number of words in a string
 * @str: the giving string
 * Return: the number of words
 */
int wordCount(char *str)
{
	int count = 0, i, isNewWord = 1;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			isNewWord = 1;
		else if (isNewWord == 1)
		{
			count++;
			isNewWord = 0;
		}
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: the giving str
 * Return: an pointer of words
 */
char **strtow(char *str)
{
	int countW = 0, Len = 0, i, wordChars = 0, k = 0, Wstart = 0, Wend = 0, j, l;
	char **words;

	if (str == NULL)
		return (NULL);
	countW = wordCount(str);
	if (countW == 0)
		return (NULL);
	words = (char **)malloc((countW + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	Len = _strlen(str); /* get str length */
	for (i = 0; i <= Len; i++) /* loop for str characters */
	{
		if (str[i] != ' ' && str[i] && wordChars++ == 0)
			Wstart = i;
		else if (str[i] == ' ' || !str[i])
		{
			if (wordChars) /* the end of the word */
			{
				Wend = i - 1;
				words[k] = (char *)malloc((wordChars + 1) * sizeof(char));
				if (words[k] == NULL) /* allocation fails free spaces */
				{
					while (k >= 0)
						free(words[--k]);
					free(words);
				}
				for (j = Wstart, l = 0; j <= Wend; j++, l++)
					words[k][l] = str[j];
				words[k][l] = '\0';
				wordChars = 0;
				k++;
			}
		}
	}
	words[k] = NULL;
	return (words);
}
