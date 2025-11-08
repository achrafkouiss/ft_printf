/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:38:09 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/08 13:43:33 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_putnbr(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_unsigned_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
