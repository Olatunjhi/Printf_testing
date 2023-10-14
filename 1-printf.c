#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	for(int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printf("%c", format[i]);
		}
		else
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				printf("%d", va_arg(args, int));
			}
			else
			{
				printf("format does not exists");
			}
			i++;
		}
	}

	va_end(args);

	return (0);
}

int main(void)
{
	int dogAge = 40;
	int petName = 30;

	_printf("Dog Age: %d\n pet Name: %i \n", dogAge, petName);

	return (0);
}

