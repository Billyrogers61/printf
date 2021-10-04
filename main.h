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
int _write_char(char c);
int print_percent(__attribute__((unused))va_list list);
char *itob(va_list list);
char *_itos(int div, int length, int n);
char *print_d(va_list list);



/**
 * struct convert- defines a structure for symbols and functions
 * @sym: The operator
 * @f: the function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

#endif /* MAIN_H */
