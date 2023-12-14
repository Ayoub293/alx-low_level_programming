#include "main.h"

/**
 * flip_bits - counts number of bits to change and from one number to another
 * @N: first number
 * @M: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int N, unsigned long int M)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = N ^ M;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
