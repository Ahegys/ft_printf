#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>



int ft_printf(const char *, ...);
int	printstr(char *str);
void	printc(char c);
int	printnbr(int nbr);



#endif //ft_printf_h