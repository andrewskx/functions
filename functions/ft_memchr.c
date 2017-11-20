/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:04:05 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/18 15:40:46 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	i = 0;
	while (i++ < n)
		if (*ptr++ == c)
			return (--ptr);
	return (0);
}
