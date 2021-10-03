#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* helper functions*/
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/*Printf functions*/
int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);
char *itob(va_list list);
char *_itos(int div, int length, int n);
char *print_d(va_list list);



/**
 * struct types - struct
 * @id: identifier of type (e.g. c means char)
 * @func: ptr to functions that print according to identifier
 */
typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;

#endif /* MAIN_H */
