#include "main.h"

/**
 * character - print out char
 * @args: parameter
 * @n: second parameter
 */
void character(va_list args, int *count)
{
	int value;
	value = va_arg(args, int);
	write(1, &value, 1);
	(*count)++;
}

/**
 * _string - print out string
 * @args: parameter
 * @n: second parameter
 */
void _string(va_list args, int *count)
{
	char *str;
	str = va_arg(args, char *);

	write(1, str, strlen(str));
	*count += strlen(str);
}

/**
 * percent - print out percent
 * @n: parameter
 */
void percent(int *count)
{
	char percent;

	write(1, &percent, 1);
	(*count)++;
}
