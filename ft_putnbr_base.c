/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:36:30 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/07 23:37:55 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	lnbr;

	lnbr = nbr;
	if (!ft_checkbase(base))
		return (0);
	len_base = ft_strlen(base);
	if (lnbr == 0)
	{
		ft_putchar(base[0]);
		return (0);
	}
	if (lnbr < 0)
	{
		write (1, "-", 1);
		lnbr = -lnbr;
	}
	return (ft_print_base(lnbr, base, len_base) - 1);
}
