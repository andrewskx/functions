/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:19:23 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/21 18:19:06 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	int					i;
	const unsigned char *ptr_s1;
	const unsigned char *ptr_s2;

	i = 0;
	ptr_s1 = (const unsigned char*)s1;
	ptr_s2 = (const unsigned char*)s2;
	while (i++ < n)
	{
		if (*ptr_s1 != *ptr_s2)
			break ;
		ptr_s1++;
		ptr_s2++;
	}
	return (*ptr_s1 - *ptr_s2);
}
