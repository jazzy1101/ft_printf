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
	set->preci = 0;
	set->len = 0;
	set->zero = 0;
	set->minus = 0;
	set->plus = 0;
	set->space = 0;
	set->hash = 0;
	set->point = 0;
	return (tab);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	res;
	t_print	*set;

	set = (t_print *)malloc(sizeof(t_print));
	if (!set)
		return (-1);
	ft_init_set(set);
	va_start(set->args, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
			ft_check_type(set, str, i);
		else
			set->n

	
}
