/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:27:09 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/21 18:32:22 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strncmp(const char *s1, const char *s2, unsigned int len);
int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (!ft_strncmp(s1, s2, n));
}
