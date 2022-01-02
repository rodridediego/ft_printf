#include "ft_printf.h"
#include <stdio.h>

int	ft_printf_aux(char type, va_list args)
{ //si omitimos la assignacion de variables c, u y *str y hacemos directamente x ejemplo return(ft_putchar_mod(va_args(args,int)));
	if (type == 'c')
		return (ft_putchar_mod(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr_mod(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_putpointer(va_arg(args, char *)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr_mod(va_arg(args, int)));
	else if (type == 'u') // diferencia de u con respecto a d,i es que imprime numeros mas grandes
		return(ft_putnbr_u(va_arg(args, unsigned int)));
	else if (type == 'x')
		return(ft_putnbr_x(va_arg(args, unsigned int)));
	else if (type == 'X')
		return(ft_putnbr_X(va_arg(args, unsigned int)));
	else if (type == '%')
	{
		write(1,"%%",1); //deberia poder poner "%" solo sin necesidad de poner otro
		return (1);
	}
	return(-1);
}
int ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	va_start(args, format);
	count = 0; //inicializar nombre del va_list y del ultimo argumento conocido
	i = 0;
	while (format[i])
	{
		if (format[i] == '%') // &format[i+1]!='\0'
		{
			if(format[i+1] == '\0')
				return (-1);
			count += ft_printf_aux(format[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_mod(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}/*
int main()
{
	int i=0;
	char str[]="quelokepasa";
	char *str1;
	
	i = printf("%d",4294967295);
	printf("\nse imprimen %d  caracteres",i);
	i = printf("%u",4294967295);
	printf("\nse imprimen %d  caracteres",i);
	i = printf("%p",str);
	printf("\nse imprimen %d  caracteres",i);
	printf("\n----------------\n");
	i = ft_printf("%d",4294967295);
	ft_printf("\nse imprimen %d  caracteres",i);
	i = printf("%u",4294967295);
	printf("\nse imprimen %d  caracteres",i);
	i = printf("%p",str);
	printf("\nse imprimen %d  caracteres",i);
	
}*//*
int main()
{
	int i;
	i = printf("%p",-10);
	printf("\nse imprimen %d  caracteres",i);
	printf("\n----------------\n");
	i = ft_printf("%p",-10);
	printf("\nse imprimen %d  caracteres",i);
}*/
