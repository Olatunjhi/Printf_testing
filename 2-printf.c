#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	for(int i = 0; format[i] != '\0'; i++)
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

				for (int j = 6; j >= 0; j--)
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

int main(void)
{
	int num = 98;

	_printf("Binary of 98 is: %b\n", num);

	return (0);
}
