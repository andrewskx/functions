/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:48:50 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/22 15:42:40 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
unsigned long	ft_strlen(char *str);
char *ft_strtrim(char const *s)
{
	unsigned int start;
	unsigned int end;
	char *ptr;
	char *ret;

	start = 0;
	end = ft_strlen((char *)s) - 1;
	if (s != 0)
	{
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			start++;
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			end--;
		ptr = (char *)malloc(sizeof(char) * (end - start + 2));
		ret = ptr;
		if (ptr)
		{	while (start != end)
			{
				*ptr = s[start++];
				ptr++;
			}
			*ptr = '\0';
			return (ret);
		}
	}
	return (0);
}
