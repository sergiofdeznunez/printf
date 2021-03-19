/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:12:10 by snunez            #+#    #+#             */
/*   Updated: 2021/03/19 13:31:36 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

void	ft_printdata(char *data, t_args arg)
{
	int	i;
	while (*data + i)
	{
		if ()
	}
}

void	analysis(const char *format, t_args args, int pos)
{
	char *flags = "-0.*";
	char *datos = "cspdiuxX";
	while (*format + pos)
	{
		if (ft_strchr(flags, *(format + pos)))
			ft_tratar_flag();
		else if (ft_strchr(datos, *(format + pos)))
		{
			ft_imprimir datos();
			break;
		}
		else if (*(format + pos) == '%')
			ft_putchar_fd('%', 1);
		else
			escapatrajo();
		pos++;
	}
}
int	ft_printf(const char *format, ...)
{
	int	i;
	va_list args;

	while (*(format + i))
	{
		if (*(format + i) != '%')
			ft_putchar_fd(*(format + i), 1);
		else
		{
			****En construccion ****
		}
		i++;
	}
}
