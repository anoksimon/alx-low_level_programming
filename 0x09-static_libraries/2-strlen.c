#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: char to check
 * by SImon c.
 * Return: 0
 */

int _strlen(char *s)

{
	int a = 0; /* starts the count from 0*/

	for (; *s++;)
		a++;
	return (a);

}
