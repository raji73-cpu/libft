/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:42:04 by abraji            #+#    #+#             */
/*   Updated: 2024/11/10 16:41:07 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lentdst;
	size_t	lentsrc;
	size_t	copy_len;
	size_t	i;

	lentdst = ft_strlen(dst);
	lentsrc = ft_strlen(src);
	if (size <= lentdst)
		return (size + lentsrc);
	copy_len = size - lentdst - 1;
	i = 0;
	while (i < copy_len && src[i] != '\0')
	{
		dst[lentdst + i] = src[i];
		i++;
	}
	dst[lentdst + i] = '\0';
	return (lentdst + lentsrc);
}
