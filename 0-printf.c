#include "main.h"
int _printf(const char *format, ...)
{
	char *str;
	int value;
	int count = 0;

	va_list args;

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
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
					value = va_arg(args, int);

					write(1, &value, 1);
					count++;
					break;
				case 's':
					str = va_arg(args, char *);

					write(1, str, strlen(str));
					count += strlen(str);
					break;
				case '%':
					write(1, &format[i], 1);
					count++;
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
