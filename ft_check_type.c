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

int	ft_print_holder(t_print *set, const char *str, int pos, va_list ap)
{
	int num_print;

	num_print = 0;
	while (!ft_strchr("cspdiuxX%", str[pos]))
	{
		if (ft_strchr("-+# .0", str[pos]))
		{
			ft_set_flag(set, str, pos);
			pos++;
		}	
		else if (ft_isdigit(str[pos]))
			pos = ft_set_width(set, str, pos);
	}
	num_print = ft_print_type(set, str, pos, ap);
	return (num_print);
}

int	ft_print_type(t_print *set, const char *str, int pos, va_list ap)
{
	int num_print;

	num_print = 0;
	if (str[pos] == 'c')
		ft_print_char(va_arg(ap, int), set);
	else if (str[pos] == 's')
		ft_print_str(va_arg(ap, const char *), set);
	else if (str[pos] == 'p')
		ft_print_pointer(va_arg(ap, void *), set);
	else if (str[pos] == 'd' || str[pos] == 'i')
		ft_print_int(va_arg(ap, int), set);
	else if (str[pos] == 'x')
		ft_print_hex(va_arg(ap, unsigned int), set, 0);
	else if (str[pos] == 'X')
		ft_print_hex(va_arg(ap, unsigned int), set, 1);
	else if (str[pos] == 'u')
		ft_print_unsigned(va_arg(ap, unsigned int), set);
	else if (str[pos] == '%')
		num_print += write(1, '%', 1);	
	return (num_print + set->n);
}