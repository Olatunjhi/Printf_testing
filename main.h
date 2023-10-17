#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
void _length(int n);
void character(va_list args, int *count);
void _string(va_list args, int *count);
void percent(int *count);
void binary(va_list args, int *count);
void _integer(va_list args,int *count);
#endif
