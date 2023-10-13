#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printf("%c", format[i]);
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					count++;
					break;
				case 's':
					printf("%s", va_arg(args, char *));
					count++;
					break;
				case '%':
					printf("%%");
					count++;
					break;
				default:

				printf("%%%c", format[i]);
				count += 2;
			}
		}
	}

	va_end(args);

	return (count);
}

int main(void)
{
	char ch = 'I';

	char *str = "am loyal";

	_printf("character:%c\n string:%s\n percent:%%\n" , ch, str);

	return (0);
}
