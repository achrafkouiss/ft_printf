/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 00:00:55 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/11 10:16:07 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ptr;
	int		count;

	if (!str)
		return (-1);
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
