/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:34:40 by abraji            #+#    #+#             */
/*   Updated: 2024/11/10 16:47:09 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*x;
	unsigned int	i;
	size_t			j;
	size_t			slenght;

	j = 0;
	i = start;
	slenght = ft_strlen(s);
	if (start >= slenght)
		return (ft_strdup(""));
	if ((slenght - start) < len)
		len = (slenght - start);
	x = malloc(len * sizeof(char) + 1);
	if (x == NULL)
		return (NULL);
	while (s[i] && j < len)
	{
		x[j] = s[i];
		i++;
		j++;
	}
	x[j] = '\0';
	return (x);
}
