#include "main.h"

/**
 * binary - print out binary
 * @args: parameter
 */
void binary(va_list args)
{
	int value;
	int i;
	int j = 0;
	char bite[8];

	value = va_arg(args, int);

	for (i = 6; i >= 0; i--)
	{
		bite[6 - j] = (value & (1 << j)) ? '1' : '0';
	}

	bite[7] = '\0';

	write(1, bite, 7);
}

void _integer(va_list args, int *count)
{
	int value;

	value = va_arg(args, int);

	_length(value);

	(*count)++;
}
