/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:31:18 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/22 16:47:08 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>


static unsigned int	ft_word(char const *s, char c)
{
	unsigned int count;
	unsigned int i;

	i = 0;
	count = 0;
	if (s)
	{
		while (s[i])
		{
			while (s[i] == c)
				i++;
			if (s[i] != c && s[i] != '\0')
				count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		return (count);
	}
	return (0);
}

static unsigned int ft_letter(char const *s, char c)
{
	unsigned int i;

	i = 0;
	if (s)
	{
		while (s[i] != c || s[i] != '\0')
			i++;
		return (i);
	}
	return (0);
}

static char	*ft_copy(char const *s, unsigned int len)
{
	char *ptr;
	unsigned int i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr)
	{
		while (i++ != len)
			ptr[i] = s[i];
		ptr[i] = '\0';
		return (ptr);
	}
	return (0);
}

char **ft_strsplit(char const *s, char c)
{
	char **ptr;
	unsigned int i;
	unsigned int len;

	i = 0;
	len = ft_word(s, c);
	ptr = (char **)malloc(sizeof(char *) * (len + 1));
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			*ptr = ft_copy(&s[i], ft_letter(&s[i], c));
			ptr++;
		}
	}
	*ptr = 0;
	return (ptr);
}


int	main(void)
{

	char str[100];
	char **ptr;
	while (1)
	{
		printf("\nDati str : ");
		scanf("%s", str);
		for (int i = 0; i < 3; i++)
		{
			if (ptr[i] != 0)
				puts(ptr[i]);
			else
				break;
		}
	}
	return (0);
}
