/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:06:56 by snunez            #+#    #+#             */
/*   Updated: 2022/01/31 12:46:08 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H
# include "Libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_print_arg(char type, va_list _arg);
int ft_printf(const char *format, ...);
void ft_printchar(va_list arg);
void ft_print_str(va_list arg);
void ft_print_pointer(va_list arg);
#endif
