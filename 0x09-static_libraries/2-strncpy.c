#include "main.h"

/** _strncpy - copy a string
 * @dest: give value
 * @src: give value
 * @n: give value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        	int a;
 
        	a = 0;
        	while (a < n && src[a] != '\0')
        	{
                    	dest[a] = src[a];
                    	a++;
        	}
        	while (a < n)
        	{
                    	dest[j] = '\0';
                    	a++;
        	}
 
        	return (dest);
}
