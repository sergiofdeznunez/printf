/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:19:36 by snunez            #+#    #+#             */
/*   Updated: 2022/02/17 13:10:07 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_printchar(va_list arg, size_t *len)
{
	char character;

	character = (char)va_arg(arg, int);
	*len += write(1, &character, 1);
	return(*len);
}

size_t  ft_print_str(va_list arg, size_t *len)
{
	char *aux;
	int i;

	i = 0;
	aux = va_arg(arg, char *);
	if (aux == NULL)
	{
		*len += write(1, "(null)", 6);
		return *len;
	}
	while (*(aux + i)) 
	{
		*len += write(1, (&*aux + i), 1);
		i++;
	}
	return(*len);
}

size_t ft_print_pointer(va_list arg, size_t *len)
{
	unsigned long pointer;

	pointer = va_arg(arg, unsigned long);
	*len += write(1, "0x", 2);
	ft_putnbr_base_long(pointer,"0123456789abcdef", len);
	return(*len);
}

size_t ft_print_int(va_list arg, size_t *len)
{
	int	nmbr;

	nmbr = va_arg(arg, int);
	ft_putnbr_base(nmbr, "0123456789", len);
	return(*len);
}

size_t	ft_print_u_int(va_list arg, size_t *len)
{
	unsigned int	nmbr;

	nmbr = va_arg(arg, unsigned int);
	ft_putnbr_base_unsigned(nmbr, "0123456789", len);
	return(*len);
}

size_t	ft_print_hexamin(va_list arg, size_t *len)
{
	size_t	hex;

	hex = va_arg(arg, size_t);
	ft_putnbr_base_long(hex, "0123456789abcdef", len);
	return(*len);
}

size_t	ft_print_hexamax(va_list arg, size_t *len)
{
	size_t	hex;

	hex = va_arg(arg, size_t);
	ft_putnbr_base_long(hex, "0123456789ABCDEF", len);
	return(*len);
}
