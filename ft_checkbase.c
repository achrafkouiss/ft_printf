/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:19:47 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/07 15:19:54 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}