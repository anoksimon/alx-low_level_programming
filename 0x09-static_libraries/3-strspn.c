#include "main.h"

/** _strspn - Entry point
 * @s: value
 * @accept: value
 * Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
        	unsigned int n = 0;
        	int b;
 
        	while (*s)
        	{
                    	for (b = 0; accept[b]; b++)
                    	{
                                	if (*s == accept[b])
                                	{
                                            	n++;
                                            	break;
                                	}
                                	else if (accept[b + 1] == '\0')
                                            	return (n);
                    	}
                    	s++;
        	}
        	return (n);
}
