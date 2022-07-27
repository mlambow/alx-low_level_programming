#include "main.h"
#include <stdlib>

/**
 **_strdup - returns a pointer to a newly alloctaed
 *space in memory which contains a copy of the string
 *passed.
 *@str: pointer to string being duplicated.
 *Return: NULL if str is NULL.
 *pointer to duplicated string on success.
 *NULL if memory was insufficient.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
