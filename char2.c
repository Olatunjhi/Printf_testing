#include "main.h"

/**
 * binary - print out binary
 * @args: parameter
 */
void binary(va_list args, int *count, int digits)
{
	unsigned int value;
	int i;
	int j;

	value = va_arg(args, unsigned int);

	for (i = digits - 1; i >= 0; i--)
	{
		char Binary = ((value >> (digits - 1 - i) & 1)) + '0';

		write(1, &Binary, 1);
		(*count)++;
	}
}

void _integer(va_list args, int *count)
{
	int value;

	value = va_arg(args, int);

	_length(value);

	(*count)++;
}
