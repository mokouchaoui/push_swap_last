/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimals.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:57:32 by mokoucha          #+#    #+#             */
/*   Updated: 2022/04/12 06:42:00 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
	{
		nbr = 147483648;
		len += ft_putstr("-2");
	}
	if (nbr < 0)
	{
		nbr *= -1;
		len += ft_putchar('-');
	}
	if (nbr < 10)
		len += ft_putchar(nbr + 48);
	else
	{
		len += ft_putnbr(nbr / 10);
		len += ft_putnbr(nbr % 10);
	}
	return (len);
}

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr < 10)
		len += ft_putchar(nbr + 48);
	else
	{
		len += ft_putnbr(nbr / 10);
		len += ft_putnbr(nbr % 10);
	}
	return (len);
}
