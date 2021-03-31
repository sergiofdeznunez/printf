/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:06:56 by snunez            #+#    #+#             */
/*   Updated: 2021/03/31 13:30:26 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H
# ifndef FLAGS
#  define FLAGS "-+ #0*."
# endif
# ifndef DATA
#  define DATA "cspdiuxX"
# endif
# include "Libft/libft.h"
# include <unistd.h>

int ft_printf(const char *format, ...);
typedef struct s_flags
{
	int	minus;
	int	plus;
	int	space;
	int	alm;
	int	zero;
	int width;
	int precision;
}				t_flags;
#endif
