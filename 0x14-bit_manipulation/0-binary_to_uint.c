#include "main.h"

/**
 * @b: pointer to a string of 0 and 1 chars.
 * 
 *
 * 
 *         
 */

unsigned int binary_to_uint(const char *b)
{
	int cnt;
	unsigned int dec;

	dec = 0;
	if (!b)
		return (0);
	for (cnt = 0; b[cnt] != '\0'; cnt++)
	{
		if (b[cnt] != '0' && b[cnt] != '1')
			return (0);
	}
	for (cnt = 0; b[cnt] != '\0'; cnt++)
	{
		dec <<= 1;
		if (b[cnt] == '1')
			dec += 1;
	}
	return (dec);
}
