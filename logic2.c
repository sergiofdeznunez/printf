/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:45:55 by snunez            #+#    #+#             */
/*   Updated: 2022/02/18 16:46:30 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_hexamin(va_list arg, size_t *len)
{
	size_t	hex;

	hex = va_arg(arg, size_t);
	ft_putnbr_base_long(hex, "0123456789abcdef", len);
	return (*len);
}

size_t	ft_print_hexamax(va_list arg, size_t *len)
{
	size_t	hex;

	hex = va_arg(arg, size_t);
	ft_putnbr_base_long(hex, "0123456789ABCDEF", len);
	return (*len);
}
