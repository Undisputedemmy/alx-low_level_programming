#include <stdio.h>

int main (void)
{
 unsigned long x, y, number = 612852475143, prime = 0, flag = 0;

	 for (x = 0; x <= 50; x++)
	 {
		 if (number % x ==0)
		 {
			 flag = 1;
			 for (y = 2; y <= x / 2; y++)
			 {
				 if (x % y == 0)
				 {
					 flag = 0;
				 }
			 }
			 if (flag == 1)
			 {
				 if (x > prime)
				 {
					 prime = x;
				 }
			 }
		 }
	 }
printf("%lu\n", prime);
return (0);
}
