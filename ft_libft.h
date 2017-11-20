/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:03:28 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/20 19:24:03 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
#include <stdlib.h>
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, unsigned int n);
char	*ft_strncpy(char *dest, const char *src, unsigned int len);
int		ft_strncmp(const char *s1, const char *s2, unsigned int len);
char	*ft_strncat(char *dest, const char *src, unsigned int len);
unsigned long	ft_strlen(char *str);
unsigned long	ft_strlcat(char *dest, const char *src, unsigned long size);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dest, const char *source);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strcat(char *dest, const char *src);
void	*ft_memset(void *b, int c, unsigned int len);
void	*ft_memmove(void *dst, const void *src, unsigned int len);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void	*ft_bzero(void *s, unsigned int n);
int		ft_atoi(const char *str);
#endif
 
