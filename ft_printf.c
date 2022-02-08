/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:26:41 by snunez            #+#    #+#             */
/*   Updated: 2022/02/08 12:46:58 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_arg(char type, va_list _arg)
{
	if (type == 'c')
		ft_printchar(_arg);
	else if (type == 's')
		ft_print_str(_arg);
	else if (type == 'p') 
		ft_print_pointer(_arg);
	else if (type == 'd' || type == 'i')
		ft_print_int(_arg);
	else if (type == 'u')
		ft_print_u_int(_arg);
	/*else if (type == 'x')
		ft_print_(_arg);
	else if (type == 'X')
		ft_print_(_arg);*/
	else if (type == '%')
		write(1, "%", 1);
	return 0;
}

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list args;

	i = 0;
	if (!format)
		return(0);
	va_start(args, format);
	while (*(format + i))
	{
		if (*(format + i) != '%')
			write(1, (&*format + i), 1);
		else
		{
			i++;
			ft_print_arg(*(format + i), args);
		}
		i++;
	}
	va_end(args);
	return(1);
}