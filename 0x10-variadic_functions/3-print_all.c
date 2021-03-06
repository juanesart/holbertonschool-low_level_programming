#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_all - function that prints anything
  * @format: takes in a format
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list list;
	char *ptr;

	va_start(list, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
			break;
			case 'i':
				printf("%i", va_arg(list, int));
			break;
			case 'f':
				printf("%f", va_arg(list, double));
			break;
			case 's':
				ptr = va_arg(list, char*);
				if (ptr != NULL)
				{
					printf("%s", ptr);
					break;
				}
				printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'f' || format[i] == 'i' ||
		format[i] == 's') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	printf("\n");
}
