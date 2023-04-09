/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			++i;
		n = n >> 1;
	}
	return (i);
}
