/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:43:13 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/08 01:11:21 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	ft_putnbr(n);
	return (ft_count(n));
}

int	ft_print_string(char *s)
{
	ft_putstr(s);
	return (ft_strlen(s));
}

int	ft_print_unsigned_int(unsigned int n)
{
	ft_unsigned_putnbr(n);
	return (ft_count_unsigned(n));
}

int	ft_print_hex(int n, char c, int count)
{
	char	*base;

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
	t_data	data_stored;
	int		count;

	va_start(ptr, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		count++;
		if (str[i] == '%' && (str[i + 1] == '%' || str[i + 1] == 'c'))
		{
			if (str[i + 1] == '%')
				ft_putchar('%');
			else if (str[i + 1] == 'c')
				ft_putchar(va_arg(ptr, int));
			i++;
		}
		else if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'
				|| str[i + 1] == 'u' || str[i + 1] == 's' || str[i + 1] == 'p'
				|| str[i + 1] == 'x' || str[i + 1] == 'X'))
		{
			if (str[i + 1] == 'd' || str[i + 1] == 'i')
				count += ft_print_int(va_arg(ptr, int));
			else if (str[i + 1] == 'u')
				count += ft_print_unsigned_int(va_arg(ptr, unsigned int));
			else if (str[i + 1] == 's')
				count += ft_print_string(va_arg(ptr, char *)) - 1;
			else if (str[i + 1] == 'p')
				count += ft_putadress(va_arg(ptr, unsigned long long), "0123456789abcdef");
			else if (str[i + 1] == 'x' || str[i + 1] == 'X')
				count = ft_print_hex(va_arg(ptr, int), str[i + 1], count);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}

int main()
{
    int len;
    int printf_len;
    char *s = "achraf";
    len = ft_printf("charachter = %d", -100);
    printf("\n");
    printf_len = printf("charachter = %d", -100);
    printf("\n");
    printf("ft_printf_len = %d\n", len);
    printf("printf_len = %d\n", printf_len);


    // t_data  data_stored;
    
    // data_stored.integer = 60;
    // printf("%d\n", data_stored.integer);

}
