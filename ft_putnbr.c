/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:54:49 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/22 13:55:12 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	int var;
	int size;

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	var = n;
	size = 1;
	while ((n / 10) > 0)
	{
		n = n / 10;
		size = size * 10;
	}
	while (size != 0)
	{
		ft_putchar((char)((var / size) + 48));
		var = var % size;
		size = size / 10;
	}
}
