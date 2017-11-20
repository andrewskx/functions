/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:48:52 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/18 15:00:29 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	int					i;
	unsigned char		*ptr_dest;
	const unsigned char *ptr_src;

	ptr_dest = dst;
	ptr_src = src;
	i = 0;
	while (i++ < len)
		*ptr_dest++ = *ptr_src++;
	return (dst);
}
