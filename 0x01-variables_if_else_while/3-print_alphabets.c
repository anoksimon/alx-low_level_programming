#include <stdio.h>



/**
**  main - prints the alphabet in lowercase, and then in uppercase
**  Return: 0
*/

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (c = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
