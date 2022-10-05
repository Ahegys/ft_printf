#include "ft_printf.h"

void	printc(char c)
{
	write(1, &c, 1);
}

int	printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
