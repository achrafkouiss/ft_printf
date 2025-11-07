/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:43:13 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/07 18:47:26 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    int i;
    va_list ptr;
    va_start(ptr, str);
    t_data  data_stored;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        count++;
        if (str[i] == '%' && str[i + 1] == '%')
        {
            ft_putchar('%');
            i++;
        }
        else if (str[i] == '%' && str[i + 1] == 'c')
        {
            data_stored.charachter = va_arg(ptr, int);
            ft_putchar(data_stored.charachter);
            i++;
        }
        else if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
        {
            // printf("xxxxxxxxxxxxx\n");
            data_stored.integer = va_arg(ptr, int);
            // printf("\n{data_stored.integer = %d}\n", data_stored.integer);
            // printf("\n{ft_count(data_stored.integer) = %d}\n", ft_count(data_stored.integer));
            printf("\n{count = %d}\n", count);

            count = count + ft_count(data_stored.integer);
            // printf("\n{count = %d}\n", count);
            ft_putnbr(data_stored.integer);
            i++;
        }
        else if (str[i] == '%' && str[i + 1] == 's')
        {
            data_stored.string = va_arg(ptr, char *);
            ft_putstr(data_stored.string);
            count = count + ft_strlen(data_stored.string) - 1;
            i++;
        }
        else if (str[i] == '%' && str[i + 1] == 'u')
        {
            data_stored.un_integer = va_arg(ptr, unsigned int);
            ft_unsigned_putnbr(data_stored.un_integer);
            i++;
        }
        else if (str[i] == '%' && (str[i + 1] == 'x' || str[i + 1] == 'X'))
        {
            data_stored.integer = va_arg(ptr, int);
            if (str[i + 1] == 'x')
                data_stored.string = "0123456789abcdef";
            else
                data_stored.string = "0123456789ABCDEF";
            if (data_stored.integer < 0)
                ft_put_unsigned_nbr_base(data_stored.integer, data_stored.string);
            else
                ft_putnbr_base(data_stored.integer, data_stored.string);
            i++;
        }
        else if (str[i] == '%' && str[i + 1] == 'u')
        {
            data_stored.un_integer = va_arg(ptr, unsigned int);
            ft_unsigned_putnbr(data_stored.un_integer);
            i++;
        }
        else if (str[i] == '%' && str[i + 1] == 'p')
        {
            data_stored.adress = va_arg(ptr, unsigned long long);
            ft_putadress(data_stored.adress, "0123456789abcdef");
            i++;
        }
        else
            ft_putchar(str[i]);
        i++;

    }
    va_end(ptr);
    return (count);
}

int main()
{
    int len;
    int printf_len;
    int s;
    len = ft_printf("charachter = %d", -2);
    printf("\n");
    printf_len = printf("charachter = %d", -2);
    printf("\n");
    printf("len = %d\n", len);
    printf("printf_len = %d\n", printf_len);


    // t_data  data_stored;
    
    // data_stored.integer = 60;
    // printf("%d\n", data_stored.integer);

}
