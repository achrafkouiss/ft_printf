/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:54:54 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/07 23:21:12 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count(int n)
{
	int	count;

    if (n < 10 && n >= 0)
    {
        return (0);
    }
    else if (n > -10 && n < 0)
    {
        return (1);
    }
	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count - 1);
}

unsigned int	ft_count_unsigned(unsigned int n)
{
	unsigned int	count;

    if (n < 10 && n <= 0)
    {
        return (0);
    }
	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count - 1); 
}