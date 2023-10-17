#include "main.h"
/**
 * _printf - To print out
 * @format: mandatory parameter
 * @...: variable parameter
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					character(args, &count);
					break;
				case 's':
					_string(args, &count);
					break;
				case '%':
					percent(&count);
					break;
				case 'b':
					binary(args, &count);
					break;
				case 'd':
				case 'i':
					_integer(args, &count);
					break;
				default:
				write(1, &format[i], 1);
				count++;
			}
			i++;
		}
	}
	va_end(args);

	return (count);
}
