#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//-------------------------MACROS-----------------------------------------
# define HEXA_LOWER "0123456789abcdef"
# define HEXA_UPPER "0123456789ABCDEF"
# define DECA "0123456789"
# define err "NOTHING VALUE!"
# define Err "NOTHING"

//-------------------------includes---------------------------------------
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

//--------------------------functions-------------------------------------
int			ft_strlen(const char *s);
void		ft_putchar(char c);
void		ft_putnbr(unsigned long num, char *n);
int			c_digit(unsigned long num, int base);
int			check_prefixs(const char *format, int len, va_list arg);
int			p_char(const char *format, int len, va_list arg);
int			p_ptr(const char *format, int len, va_list arg);
int			p_stdi(const char *format, int len, va_list arg);
int			p_ux(const char *format, int len, va_list arg);
int			ft_printf(const char *format, ...);

#endif