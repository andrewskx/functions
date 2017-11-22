/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:01:24 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/21 18:15:02 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *ptr;

	if (s != 0 && f != 0)
	{
		ptr = (char*)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
		if (ptr)
		{
			while (*s)
			{
				*ptr = f(*s);
				ptr++;
				s++;
			}
			return (ptr);
		}
	}
	return (0);
}
