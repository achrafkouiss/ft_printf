/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:17:20 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/08 16:30:01 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
//make sure to remove it !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# include <stdio.h>

int				ft_printf(const char *str, ...);

void			ft_putchar(const char c);
void			ft_unsigned_putnbr(unsigned int nb);
int				ft_checkbase(const char *str);
int				ft_print_base(long nbr, const char *base, int len_base);
size_t			ft_strlen(const char *s);
void			ft_putstr(const char *s);
int				ft_putadress(unsigned long long nbr, const char *base);
void			ft_putnbr(int nb);
int				ft_putnbr_base(int nbr, const char *base);
int				ft_put_unsigned_nbr_base(unsigned int nbr, const char *base);
void			ft_print_digits(int nb);
int				ft_count(int n);
unsigned int	ft_count_unsigned(unsigned int n);

int				ft_which_format(const char c, va_list ptr, int count);
int				ft_print_hex(int n, const char c, int count);
int				ft_print_unsigned_int(unsigned int n);
int				ft_print_string(const char *s);
int				ft_print_int(int n);

#endif