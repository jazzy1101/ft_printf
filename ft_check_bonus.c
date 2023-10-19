#include "ft_printf.h"

void	ft_check_flag(t_print *set, const char *str, int pos)
{
	while (!ft_strchr("cspdiuxX%", str[pos]))
	{
		if (str[pos] == ' ')
			set->space = 1;
		if (str[pos] == '.')
			set->preci = str[pos + 1];
			
		if (str[pos] == '#')
			set->hash = 1;
		if (str[pos] == '-')
			set->minus = 1;
		if (str[pos] == '+')
			set->plus = 1;
		pos++;
	}
}

void	ft_check_width(t_print *set, const char *str, int pos)
{

}