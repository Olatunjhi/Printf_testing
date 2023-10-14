#include <stdio.h>

void length(int ch)
{
	int length = snprintf(NULL, 0, %d, ch) + 1;
	char *byte = malloc(length);
	char *str = snprintf(str_num, byte, %d, ch) - 1;

	write(str_num, length, "%d", ch);
}
