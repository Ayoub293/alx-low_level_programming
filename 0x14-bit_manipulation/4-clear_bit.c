#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - this prog set value of a bit to 0 at a givn index
 * @N: parameter
 * @index: index
 * Return: 1 if succes, -1 if error
 */
int clear_bit(unsigned long int *N, unsigned int index)
{
	if (index > sizeof(N) * 8)
		return (-1);
	*N &= ~(1 << index);
	return (1);
}
