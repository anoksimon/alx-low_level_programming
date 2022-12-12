#include <stdio.h>

/**
** main - prints the alphabets in lowercase letters except q and e
** return: 0
*/

int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
