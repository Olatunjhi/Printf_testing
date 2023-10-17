#include "main.h"

/**
 * binary - print out binary
 * @args: parameter
 */
void binary(va_list args, int *count)
{
	unsigned int value;
	int i;
	char Binary[8];

	value = va_arg(args, unsigned int);

	for (i = 6; i >= 0; i--)
	{
		Binary[6 - i] = (value & (1 << i)) ? '1' : '0';
	}

	 Binary[7] = '\0';

	write(1, Binary, 7);

	(*count)++;
}

void _integer(va_list args, int *count)
{
	int value;

	value = va_arg(args, int);

	_length(value);

	(*count)++;
}
