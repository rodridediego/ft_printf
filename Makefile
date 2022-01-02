SRCS		= ft_printf.c ft_putchar_mod.c ft_putnbr_hex.c ft_putnbr_mod.c ft_putnbr_mod_no_sing.c ft_putnbr_u.c ft_putpointer.c ft_putstr_mod.c

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

CC			= cc

RM			= rm -f

FLAGS		= -Wall -Werror -Wextra

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			@ar rc  ${NAME} ${OBJS}
			@ranlib ${NAME}


all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all