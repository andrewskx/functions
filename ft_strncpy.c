/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:27:12 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/17 17:42:46 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int len)
{
	int j;

	j = 0;
	while (j < len)
	{
		dest[j] = src[j];
		j++;
	}
	dest[len] = '\0';
	return (dest);
}
