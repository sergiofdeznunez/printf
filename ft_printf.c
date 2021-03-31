/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:12:10 by snunez            #+#    #+#             */
/*   Updated: 2021/03/31 13:30:22 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

void	ft_tratar_nbs(const char *format, int pos)
{
	long int	nb;


}

void	ft_tratar_flag(const char *format, int pos, t_flags flags)
{
	if (*(format + pos) == '-')
		flags.minus = 1;
	if (*(format + pos) == '+')
		flags.plus = 1;
	if (*(format + pos) == ' ')
		flags.space = 1;
	if (*(format + pos) == '#')
		flags.alm = 1;
	if (*(format + pos) == '*')
		flags.width = 1;
	if (*(format + pos) == '.')
		flags.precision = 1;
	if (*(format + pos) == '0')    //cuidado!!!
		flags.zero = 1;
	if (ft_isdigit(*(format + pos))) // cuidado!!!
	{
		ft_tratar_nbs();		
	}     
}

void	analysis(const char *format, int pos, va_list args)
{
	t_flags	flags;

	while (*format + pos)
	{
		if (ft_strchr(FLAGS, *(format + pos)) || ft_isdigit(*(format + pos)))
			ft_tratar_flag(format, pos, flags);
		else if (ft_strchr(DATA, *(format + pos)))
			ft_print_data();
		else if (*(format + pos) == '%')
			write(1, '%', 1);
		else
			error();
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
			write(1, *(format + i), 1);
		else
		{
			analysis (****En construccion ****);
		}
		i++;
	}
	return ();
}
