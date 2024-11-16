/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:46:44 by abraji            #+#    #+#             */
/*   Updated: 2024/11/10 16:47:32 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*x;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	x = malloc((len1 + len2) * sizeof(char) + 1);
	if (x == NULL)
		return (NULL);
	x[0] = 0;
	ft_strlcat(x, s1, len1 + 1);
	ft_strlcat(x, s2, len1 + len2 + 1);
	return (x);
}
