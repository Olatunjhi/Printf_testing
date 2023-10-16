#include "main.h"

/**
 * _length - convert int to string
 * @n: function parameter
 *
 */
void _length(int n)
{
	int length;
	char *space;

	length = snprintf(NULL, 0, "%d", n) + 1;

	space = malloc(length);

	if (space == NULL)
		return;

	snprintf(space, length, "%d", n);

	write(1, space, length - 1);
}
