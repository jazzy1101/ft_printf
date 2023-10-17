#include "libft.h"

void	ft_check_type(t_print set, const char *str, int pos)
{
	while (!ft_strchr("cspdiuxX%", str[pos]))
	{
		if (str[pos] == '.')
		{
			set->point = 1;
			pos++;
		}
		if (str[pos] == '-')
		{
			set->minus = 1;
			pos++;
		}
		if (ft_isdigit(str[pos]) && str[pos] != '0')
		{
		if (str[pos] == '0' && ft_isdigit(str[pos + 1]))
		{
			

		if (str[pos] == '#')
		{
			set->hash = 1;
			pos++;
		}
		if (str[pos] == '+')

	}
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
