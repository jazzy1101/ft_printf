/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:19:03 by dabae             #+#    #+#             */
/*   Updated: 2023/10/18 11:19:06 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_check_type(t_print *set, const char *str, int pos, va_list ap)
{
	ft_check_flag(set, str, pos, ap);
	if (str[pos] == 'c')
		ft_print_char(va_arg(ap, int));
	else if (str[pos] == 's')
		ft_print_str(va_arg(ap, const char *));
	else if (str[pos] == 'p')
		ft_print_pointer(va_arg(ap, void *));
	else if (str[pos] == 'd' || str[pos] == 'i')
		ft_print_int(va_arg(ap, int));
	else if (str[pos] == 'x' || str[pos] == 'X' || str[pos] == 'u')
		ft_print_unsign_int(va_arg(ap, unsigned int));
	return (set->n);
}
