/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:41:44 by abraji            #+#    #+#             */
/*   Updated: 2024/11/10 16:48:11 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cpy(const char *s1, size_t i, size_t len)
{
	char	*x;
	size_t	k;

	x = malloc(len + 1);
	if (x == NULL)
		return (NULL);
	k = 0;
	while (k < len)
	{
		x[k] = s1[i + k];
		k++;
	}
	x[len] = '\0';
	return (x);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	return (ft_cpy(s1, i, len));
}
