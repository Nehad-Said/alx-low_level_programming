#include "main.h"

/**
 * 
 *            
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitw, check;
	unsigned int dec, cnt;

	check = 1;
	bitw = n ^ m;
	dec = 0;

	for (cnt = 0; cnt < (sizeof(unsigned long int) * 8); cnt++)
	{
		if (check == (bitw & check))
			dec++;
		check <<= 1;
	}
	return (dec);
}
