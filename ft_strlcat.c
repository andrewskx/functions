/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 16:32:53 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/18 17:16:46 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned long	ft_strlcat(char *dest, const char *src, unsigned long size)
{
	int len_dest;
	int len_src;
	char *ptr;

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
	return (len_src + size);
}


int	main(void)
{
	char str[100];
	char str1[100];

	while (1)
	{
		printf("\nstr:");
		scanf("%s", str);
		printf("str1:");
		scanf("%s", str1);
		printf("strlcat = %lu, %s, %s", strlcat(str, str1, sizeof(str)), str,str1);
	}
	return (0);
}
