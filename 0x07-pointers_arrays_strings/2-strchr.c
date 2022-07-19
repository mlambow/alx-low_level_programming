#include "main.h"

/**
**_strchr - Locates a character in a string
*@s: String
*@c: Character to search
*Return: Pointer to the first occurrence of the character c in the string s
*/

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
