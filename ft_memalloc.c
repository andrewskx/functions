/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 18:59:27 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/20 19:56:43 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
void *ft_bzero(void *s, unsigned int n);
void	*ft_memalloc(unsigned int size)
{
	void	*ptr;

	ptr = (void*)malloc(sizeof(void) * size);
	if (ptr == 0)
		return (0);
	return (ft_bzero(ptr, size));
}

