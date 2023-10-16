#include "main.h"

int _printf(const char *format, ...)
{
	int i;
	int j;
	va_list args;

	va_start(args, format);

	for(i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else
		{
			if (format[i + 1] == 'b')
			{
				int value = va_arg(args, int);

				char binary[8];

				for (j = 6; j >= 0; j--)
				{
					binary[6 - j] = (value & (1 << j)) ? '1' : '0';
				}
				binary[7] = '\0';

				write(1, binary, 7);
			}
			i++;
		}
	}

	va_end(args);

	return (0);
}
