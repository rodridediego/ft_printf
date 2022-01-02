#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
int					IntLength(int num);
int					ft_printf_aux(char type, va_list args);
int					ft_printf(const char *format, ...);
int					ft_putchar_mod(int c);
int					ft_putnbr_mod_no_sing(int num);
int					ft_putnbr_mod(int num);
int					ft_putpointer(char *str);
unsigned int		ft_putstr_mod(char *str);
unsigned int		unsignedIntLength(unsigned int num);
unsigned int		ft_putnbr_u(unsigned int num);
unsigned int		ft_putnbr_X(unsigned int num);
unsigned int		ft_putnbr_x(unsigned int num);
long unsigned int	lengthInHexadecimal(long unsigned int num);
long unsigned int	ft_putnbr_x_lu(long  unsigned int num);

#endif

