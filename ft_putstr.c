/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:52:20 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/22 13:59:34 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char const *s)
{
	if (s)
	{
		while (*s)
			write(1, s++, 1);
	}
}
