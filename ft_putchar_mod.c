#include "ft_printf.h"
int ft_putchar_mod(int c) //ft_putchar_modified
{
	unsigned char c1;

	c1 = (unsigned char) c; //el cast hace falta?
	write(1, &c1, 1);
	return(1);
}