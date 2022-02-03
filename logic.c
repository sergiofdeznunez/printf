/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:19:36 by snunez            #+#    #+#             */
/*   Updated: 2022/02/03 14:18:37 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printchar(va_list arg)
{
    char character;

    character = (char)va_arg(arg, unsigned int);
    write(1, &character, 1);
}

void  ft_print_str(va_list arg)
{
    char *aux;
    int i;

    i = 0;
    aux = va_arg(arg, char *);
    while (*(aux + i)) 
    {
        write(1, (&*aux + i), 1);
        i++;
    }
}

void ft_print_pointer(va_list arg)
{
    unsigned long pointer;

    pointer = va_arg(arg, unsigned long);
    write(1, "0x", 2);
	ft_putnbr_base_long(pointer,"0123456789abcdef");
}

/*void ft_print_dec(va_list arg) 
{

}

void ft_print_int(va_list arg)
{
    int nmbr;

    nmbr = va_arg(arg, char);
    write(1, nmbr, sizeof(nmbr));
}*/

