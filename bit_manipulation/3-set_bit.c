/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Bit being evaluated
 * @index: Index, starting from 0, of bit to set
 *
 * Return: 1 on success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
