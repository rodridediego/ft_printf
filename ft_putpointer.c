#include "ft_printf.h"
long unsigned int lengthInHexadecimal(long unsigned int num)
{
	if (num < 16)
		return (1);
	else
	{
		return (1 + lengthInHexadecimal(num / 16));
	}
}

long unsigned int ft_putnbr_x_lu(long  unsigned int num) //devuelve numero de cifras y encima hace el putnbr
{
	unsigned char aux; //que esto sea unsigned int
	if(num < 16)
	{
		//printf("%u\n",num);
		if (num < 10)
		{
			aux = '0' + (unsigned char) num; //hacer cast de esto a unsigned char
			write(1, &aux, 1);
		}
		else if (num >= 10)
		{
			aux = 'a' + (unsigned char) num - 10;
			write(1, &aux, 1);
		}
		return (1);
	}
	else
	{
		//printf("%u\n",num);
		ft_putnbr_x_lu(num / 16);
		ft_putnbr_x_lu(num % 16);
		return (1 + lengthInHexadecimal(num / 16));
	}
}

int ft_putpointer(char *str)
{
	long unsigned int *dir;
	if (!str)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	dir =(long unsigned int*) &str;
	write(1, "0x",2);
	return (ft_putnbr_x_lu(*dir)+2);
}