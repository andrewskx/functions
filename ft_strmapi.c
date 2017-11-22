/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:09:30 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/21 18:14:11 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char	*ptr;

	i = 0;
	if (s != 0 && f != 0)
	{
		ptr = (char*)malloc((ft_strlen(char *)s) * sizeof(char));	
		if (ptr)
		{	
			while (*s)
			{
				*ptr = f(i, *s);
				i++;
				s++;
				ptr++;
			}
			return (ptr);
		}
	}
	return (0);
}
