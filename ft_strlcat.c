/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 16:32:53 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/20 18:32:54 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char *dest, const char *src, unsigned long size)
{
	int		len_dest;
	int		len_src;
	char	*ptr;

	ptr = (char*)src;
	len_dest = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	while (dest[len_dest])
		len_dest++;
	while (*dest)
		dest++;
	if (size >= len_src + len_dest)
	{
		while (*ptr)
			*dest++ = *ptr++;
		*dest = '\0';
	}
	return (len_src + len_dest);
}
