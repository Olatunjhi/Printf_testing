#include "main.h"

/**
 * _printf - printf like function
 * @format: mandatory parameter
 * @...: variadic parameter
 *
 * Return: zero (0)
 */
int _printf(const char *format, ...)
{
	int i;
	int value;
	int *ptValue;

	va_list args;

	if (format == NULL)
	{
		return (1);
	}

	va_start(args, format);

	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				value = va_arg(args, int);

				ptValue = &value;

				_length(ptValue);
			}
			else
			{
				write(1, &format[i], 1);
			}
			i++;
		}
	}

	va_end(args);

	return (0);
}
