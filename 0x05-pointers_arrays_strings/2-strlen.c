#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to find the lenght of
 *
 * Return : lenght of s
 *
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
		x++;

	return (x);
}
