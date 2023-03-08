#include "FUNCTION_POINTERS.H"

/**
 * array_iterator - a function given as a 
 * parameter on each elelment of an array
 *
 * @array: array to execute func on 
 * @size: is th esize of the array
 * @: is a pointer to the function you nee to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if(array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i];
			i++;
		}
	}

}
