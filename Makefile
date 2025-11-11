NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_putchar.c ft_unsigned_putnbr.c ft_checkbase.c ft_print_base.c \
		ft_strlen.c ft_putstr.c ft_putadress.c ft_putnbr.c \
		ft_put_unsigned_nbr_base.c ft_print_digits.c ft_count.c ft_which_format.c \
		ft_printf.c
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $@ $^

clean :
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all fclean clean