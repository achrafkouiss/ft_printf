/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_base.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:50:55 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/08 16:31:29 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr_base(unsigned int nbr, const char *base)
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
	return (ft_print_base(lnbr, base, len_base) - 1);
}
