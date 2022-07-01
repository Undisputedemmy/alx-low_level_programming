#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Retun: Always 0 (Success!)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d is negative\n");
	else
		printf("%d is negative\n");
	return (0);
}
