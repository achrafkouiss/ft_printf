/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:45:16 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/11 10:21:05 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adress(unsigned long nbr, const char *base, int len_base)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (0);
	i = ft_print_adress(nbr / len_base, base, len_base) + 1;
	ft_putchar(base[nbr % len_base]);
	return (i);
}

int	ft_putadress(unsigned long nbr, const char *base)
{
	int					len_base;
	unsigned long		lnbr;

	if (nbr == 0)
	{
		ft_putstr("(nil)");
		return (4);
	}
	if (!ft_checkbase(base))
		return (0);
	lnbr = nbr;
	ft_putstr("0x");
	len_base = ft_strlen(base);
	if (lnbr == 0)
	{
		ft_putchar(base[0]);
		return (0);
	}
	return (ft_print_adress(lnbr, base, len_base) + 1);
}
