/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 00:00:55 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/08 16:35:38 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	ft_putnbr(n);
	return (ft_count(n));
}

int	ft_print_string(const char *s)
{
	ft_putstr(s);
	return (ft_strlen(s));
}

int	ft_print_unsigned_int(unsigned int n)
{
	ft_unsigned_putnbr(n);
	return (ft_count_unsigned(n));
}

int	ft_print_hex(int n, const char c, int count)
{
	const char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < 0)
		count = count + ft_put_unsigned_nbr_base(n, base);
	else
		count = count + ft_putnbr_base(n, base);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ptr;
	int		count;

	va_start(ptr, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		count++;
		if (str[i] == '%')
		{
			i++;
			while (str[i] == ' ')
				i++;
			count = ft_which_format(str[i], ptr, count);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}
// #include <limits.h>

// int	main(void)
// {
// 	int len;
// 	// int printf_len;
// 	// char *s = "achraf";
// 	len = ft_printf(" NULL %s NULL ", NULL);
// 	printf("\n");
// 	// printf_len = printf(" NULL %s NULL ", NULL);
// 	printf("\n");
// 	printf("ft_printf_len = %d\n", len);
// 	// printf("printf_len = %d\n", printf_len);
// 	// t_data  data_stored;
// 	// data_stored.integer = 60;
// 	// printf("%d\n", data_stored.integer);
// }