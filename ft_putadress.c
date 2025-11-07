/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:45:16 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/07 17:34:17 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_adress(unsigned long long nbr, char *base, int len_base)
{
	if (nbr == 0)
		return ;
	ft_print_adress(nbr / len_base, base, len_base);
	ft_putchar(base[nbr % len_base]);
}

void	ft_putadress(unsigned long long nbr, char *base)
{
	int		len_base;
	unsigned long long	lnbr;

	lnbr = nbr;
    ft_putstr("0x");
	if (!ft_checkbase(base))
		return ;
    
	len_base = ft_strlen(base);
	if (lnbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	ft_print_adress(lnbr, base, len_base);
}