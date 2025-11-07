/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:28:08 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/07 15:28:39 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base(long nbr, char *base, int len_base)
{
	if (nbr == 0)
		return ;
	ft_print_base(nbr / len_base, base, len_base);
	ft_putchar(base[nbr % len_base]);
}