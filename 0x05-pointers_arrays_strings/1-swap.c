#include "main.h"

/**
* swap_int - swap the value
* @a: first integer
* @b: integer
*/

void swap_int(int *a, int *b)

{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
