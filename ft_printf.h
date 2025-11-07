/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:17:20 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/07 17:58:32 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_data
{
	int					integer;
	unsigned int		un_integer;
	char				charachter;
	char				*string;
	unsigned long long	adress;
}						t_data;

void					ft_putchar(char c);
void					ft_unsigned_putnbr(unsigned int nb);
int						ft_checkbase(char *str);
void					ft_print_base(long nbr, char *base, int len_base);
size_t					ft_strlen(const char *s);
void					ft_putstr(char *s);
void					ft_putadress(unsigned long long nbr, char *base);
void					ft_putnbr(int nb);
void					ft_putnbr_base(int nbr, char *base);
void					ft_put_unsigned_nbr_base(unsigned int nbr, char *base);
void	ft_print_digits(int nb);
int	ft_count(int n);

#endif