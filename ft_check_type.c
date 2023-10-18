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


void	ft_check_flag(t_print *set, const char *str, int pos)
{
	while (!ft_strchr("cspdiuxX%", str[pos]))
	{
		if (str[pos] == '.')
			set->point = 1;
		if (str[pos] == '-')
			set->minus = 1;
		if (str[pos] == '#')
			set->hash = 1;
		if (str[pos] == '+')
			set->plus

	}
}
void	ft_check_type(t_print *set, const char *str, int pos)
{
	
	if (str[pos] == 'c')
		ft_print_char(va_arg(set->args, char));
	else if (str[pos] == 's')
		ft_print_str(va_arg(set->args, const char*));
	else if (str[pos] == 'p')
		ft_print_pointer(va_arg(set->args, void*));
	else if (str[pos] == 'd' || str[pos] == 'i')
		ft_print_int(va_arg(set->args, int));
	else if (str[pos] == 'x' || str[pos] == 'X' || str[pos] == 'u')
		ft_print_unsign_int(va_arg(set->args, unsigned int));
	return ();
}
