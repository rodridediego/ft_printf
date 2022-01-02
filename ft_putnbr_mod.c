#include "ft_printf.h"
int ft_putnbr_mod(int num)//usamos itoa para pasar cadena y retornamos fr_putstr_mod así retornamos tb el menos
{
	if (num < 0)
	{
		write (1,"-", 1);
		return (ft_putnbr_mod_no_sing(num) + 1);
	}
	else
	{
		return (ft_putnbr_mod_no_sing(num));
	}
}

