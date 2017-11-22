/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:32:40 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/21 18:40:24 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	if (s != 0)
	{
		ptr = (char*)malloc(sizeof(char) * (len + 1));
		if (ptr)
		{
			len += start;
			while (s[start] && start != len)
			{
				*ptr = s[start];
				ptr++;
				start++;
			}
			*ptr = '\0';
			return (ptr);
		}
	}
	return (0);
}
