/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <snunez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:06:56 by snunez            #+#    #+#             */
/*   Updated: 2022/02/11 12:35:46 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H
# include "Libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_print_arg(char type, size_t len, va_list _arg);
int		ft_printf(const char *format, ...);
size_t	ft_printchar(va_list arg, size_t len);
size_t	ft_print_str(va_list arg, size_t len);
size_t	ft_print_pointer(va_list arg, size_t len);
size_t	ft_print_int(va_list arg, size_t len);
size_t	ft_print_u_int(va_list arg, size_t len);
size_t	ft_print_hexamin(va_list arg, size_t len);
size_t	ft_print_hexamax(va_list arg, size_t len);
#endif
