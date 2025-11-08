/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:39:04 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/08 16:25:00 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_which_format(const char c, va_list ptr, int count)
{
	if (c == 'd' || c == 'i')
		count += ft_print_int(va_arg(ptr, int));
	else if (c == 'u')
		count += ft_print_unsigned_int(va_arg(ptr, unsigned int));
	else if (c == 's')
		count += ft_print_string(va_arg(ptr, char *)) - 1;
	else if (c == 'p')
		count += ft_putadress(va_arg(ptr, unsigned long long),
				"0123456789abcdef");
	else if (c == 'x' || c == 'X')
		count = ft_print_hex(va_arg(ptr, int), c, count);
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'c')
		ft_putchar(va_arg(ptr, int));
	else
	{
		ft_putchar('%');
		ft_putchar(' ');
		count++;
	}
	return (count);
}
