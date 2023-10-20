/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:11:27 by dabae             #+#    #+#             */
/*   Updated: 2023/10/19 17:34:10 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_str(const char *str, t_print *set)
{
    int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		set->n += write(1, &str[i], 1);
		i++;
	}
}
