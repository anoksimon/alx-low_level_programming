#include <stdio.h>

#include "main.h"

/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
** by Simon Chukwunwike
*/



int main(void)

{

	unsigned long int j, n = 612852475143;



	for (j = 3; j < 782849; j = j + 2)

	{

		while ((n % j == 0) && (n != j))

			n = n / j;

	}

	printf("%lu\n", n);

	return (0);

}
