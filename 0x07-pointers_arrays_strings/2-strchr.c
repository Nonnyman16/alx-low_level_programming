#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return (0);/* values null*/
}
