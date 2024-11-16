/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:02:10 by abraji            #+#    #+#             */
/*   Updated: 2024/11/10 16:39:35 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*j;

	if (!dest && !src)
		return (0);
	x = (unsigned char *)dest;
	j = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		x[i] = j[i];
		i++;
	}
	return (dest);
}
