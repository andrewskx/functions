/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:20:06 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/18 15:03:58 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	int					i;
	unsigned char		*ptr_dest;
	const unsigned char *ptr_src;

	i = 0;
	ptr_dest = dst;
	ptr_src = src;
	if (n)
	{
		while (i < n)
		{
			if ((*ptr_dest++ = ptr_src[i]) == c)
				return (ptr_dest);
			i++;
		}
	}
	return (0);
}
