/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopes < vlopes@student.42.rio>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:48:57 by vlopes            #+#    #+#             */
/*   Updated: 2022/06/24 16:59:47 by vlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n)
{
	int		i;
	char	c;

	i = 1;
	if (n < 0)
	{	
		ft_putchar('-');
		i = -1;
	}
	if (n / 10)
		ft_putnbr(n / 10 * i);
	c = 48 + n % 10 * i;
	ft_putchar(c);
}
