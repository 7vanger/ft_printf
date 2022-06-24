/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 06:02:03 by vlopes            #+#    #+#             */
/*   Updated: 2022/06/24 11:13:04 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_rec_len(char c)
{
	int	len;

	if (c == 'd')
		len = ft_putnbr(va_arg(lb, int));
	if (c == 's')
		len = ft_putstr(va_arg(lb, char: *));
	return (len);
}	

int	ft_printf(const char *s, ...)
{
	va_list lb;
	va_start(lb, s);
	va_arg(lb, char);
	va_cpy();
	va_end(lb);

	int		i;
	int 	len;
	char	*name

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len = ft_rec_len(s[i]);
		}
		i++;
	}
}
