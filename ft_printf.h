/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:49:30 by dabae             #+#    #+#             */
/*   Updated: 2023/10/16 16:46:42 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>

typedef	struct	s_print
{
	va_list	args;

	int	n;
	int	width;
	int	preci;
	int	len;
	int	zero;
	int	minus;
	int	plus;
	int	space;
	int	hash;
	int	point;
}	t_print;




#endif
