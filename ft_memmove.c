/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:00:02 by abraji            #+#    #+#             */
/*   Updated: 2024/11/05 21:22:35 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sr;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	dst = dest;
	sr = src;
	i = 0;
	if (dest > src)
	{
		while (i < n)
		{
			dst[n - 1] = sr[n - 1];
			n--;
		}
	}
	else
	{
		dst = ft_memcpy(dest, src, n);
	}
	return (dest);
}
