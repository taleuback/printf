/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:05:19 by ocrobin           #+#    #+#             */
/*   Updated: 2024/08/04 13:20:29 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int n)
{
	int	i;
	int	dest;

	dest = n;
	i = 1;
	if (dest < 0 && dest != -2147483648)
	{
		i = 2;
		dest = -dest;
	}
	else if (dest == -2147483648)
	{
		ft_putnbr_fd(n, 1);
		return (11);
	}
	while (dest > 9)
	{
		dest /= 10;
		i++;
	}
	ft_putnbr_fd(n, 1);
	return (i);
}
