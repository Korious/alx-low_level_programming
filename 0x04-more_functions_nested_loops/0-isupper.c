#include <stdio.h>
#include <ctype.h>
/*
 *Write a function that checks for uppercase character
 *return 0
 */
int isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
