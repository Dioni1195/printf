#ifndef Holberton
#define Holberton
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _str_print(char *s);
void (*get_op(char *s))(va_list lst);
/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function associated
  */
typedef struct op
{
	char *op;
	void (*f)(va_list lst);
} op_t;
#endif
