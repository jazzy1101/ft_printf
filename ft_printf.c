/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:41:48 by dabae             #+#    #+#             */
/*   Updated: 2023/10/18 11:19:20 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

t_print	*ft_init_set(t_print *set)
{
	set->n = 0;
	set->width = 0;
	set->preci = -1;
	set->zero = 0;
	set->minus = 0;
	set->plus = 0;
	set->space = 0;
	set->hash = 0;
	return (set);
}

int	ft_parse_str(const char *str, t_print *set, va_list ap)
{
	int	i;
	int num_print;

	num_print = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			num_print += ft_check_type(set, str, i, ap);
		}
		else
			num_print += write(1, &str[i], 1);
	}
	return (num_print);
}
int	ft_printf(const char *str, ...)
{
	int	res;
	t_print	*set;
	va_list	ap;

	res = 0;
	set = (t_print *)malloc(sizeof(t_print));
	if (!set)
		return (-1);
	ft_init_set(set);
	va_start(ap, str);
	res = ft_parse_str(str, set, ap);
	return (res);
}
