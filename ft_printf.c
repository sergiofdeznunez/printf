/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:26:41 by snunez            #+#    #+#             */
/*   Updated: 2022/02/18 16:13:07 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_arg(char type, size_t *len, va_list _arg)
{
	if (type == 'c')
		return (ft_printchar(_arg, len));
	else if (type == 's')
		return (ft_print_str(_arg, len));
	else if (type == 'p')
		return (ft_print_pointer(_arg, len));
	else if (type == 'd' || type == 'i')
		return (ft_print_int(_arg, len));
	else if (type == 'u')
		return (ft_print_u_int(_arg, len));
	else if (type == 'x')
		return (ft_print_hexamin(_arg, len));
	else if (type == 'X')
		return (ft_print_hexamax(_arg, len));
	else if (type == '%')
		*len += write(1, "%", 1);
	return (*len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	size_t	len;
	va_list	args;

	i = 0;
	len = 0;
	if (!format)
		return (len);
	va_start(args, format);
	while (*(format + i))
	{
		if (*(format + i) != '%')
			len += write(1, (&*format + i), 1);
		else
		{
			i++;
			len = ft_print_arg(*(format + i), &len, args);
		}
		i++;
	}
	va_end(args);
	return (len);
}
