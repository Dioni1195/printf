#ifndef Holberton
#define Holberton
#include <stdarg.h>
int _prt_nmb(unsigned int n);
int _case_s(char *p);
int _str_srch(char *);
int _str_len(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int _str_print(char *s);
int (*get_op(char *s))(va_list lst);
int cases(const char *format, va_list lst);
int _print_int(int lst);
#endif
