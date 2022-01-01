#include "ft_printf.h"
int ft_putnbr_mod(int num)//usamos itoa para pasar cadena y retornamos fr_putstr_mod así retornamos tb el menos
{//podemos llamar ft_putnbr_d
	char *str;
	str = ft_itoa(num);
	return(ft_putstr_mod(str));
}
//para %d