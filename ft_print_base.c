/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:28:08 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/08 16:31:11 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_base(long nbr, const char *base, int len_base)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (0);
	i = ft_print_base(nbr / len_base, base, len_base) + 1;
	ft_putchar(base[nbr % len_base]);
	return (i);
}
