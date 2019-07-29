#ifndef Holberton
#define Holberton
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _str_print(char *s);
int (*get_op(char *s))(va_list lst);
/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function associated
  */
typedef struct op
{
	char *op;
	int (*f)(va_list lst);
} op_t;
#endif
