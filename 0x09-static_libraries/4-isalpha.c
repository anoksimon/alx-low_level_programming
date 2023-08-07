#include "main.h"
                    	
/**
 * _isalpha - checks for alphabetic character
 * @c: character to checked
 * Return: 1 only if c is a letter, 0 else
 */

int _isalpha(int c)
{
        	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
