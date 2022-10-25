#include "main.h"
/**
 * swap_int -swap the values of int a and b
 * @a - first int to swap
 * @b - second to swap
 * Return -void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
