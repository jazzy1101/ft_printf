/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:41:48 by dabae             #+#    #+#             */
/*   Updated: 2023/10/16 16:53:21 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

t_print	*ft_init_set(t_print *set)
{
	set->n = 0;
	set->width = 0;
	set->preci = -1;
	set->len = 0;
	set->zero = 0;
	set->minus = 0;
	set->plus = 0;
	set->space = 0;
	set->hash = 0;
	set->point = 0;
	return (set);
}

int	ft_parse_str(const char *str, t_print *set, va_list ap)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
			ft_check_type(set, str, i);
		else
			set->n += write(1, &str[i], 1);
	}
	return (set->n);
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
	va_start(set->args, str);
	res = ft_parse_str(str, set, ap);
	
}
