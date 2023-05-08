#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c : character to be located
 * @s : string to locate character
 *
 * Return:  a pointer to the first occurrence of the
 * character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] >= '\0'; l++)
	{
		if (s[l] == c)
			return (&s[l]);
	}
	return (0);
}
