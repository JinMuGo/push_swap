/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 05:44:52 by jgo               #+#    #+#             */
/*   Updated: 2022/11/05 17:46:15 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft.h"

# define CONVERSION_LIST "cspdiuxX"
# define BASE_DECIMAL "0123456789"
# define BASE_HEXA_LOWER "0123456789abcdef"
# define BASE_HEXA_UPPER "0123456789ABCDEF"

typedef enum e_conversion {
	CHAR = 'c',
	STR = 's',
	POINTER = 'p',
	DECIMAL = 'd',
	INT = 'i',
	UNSIGNED_INT = 'u',
	HEXA_LOWER = 'x',
	HEXA_UPPER = 'X'
}	t_conversion;

typedef int	(*t_funcptr)(va_list*, const char);

int	ft_printf(const char *format, ...);
int	ft_printf_c(va_list *ap, char conversion);
int	ft_printf_d(va_list *ap, char conversion);
int	ft_printf_p(va_list *ap, char conversion);
int	ft_printf_s(va_list *ap, char conversion);
int	ft_printf_u(va_list *ap, char conversion);
int	ft_printf_x(va_list *ap, char conversion);

#endif