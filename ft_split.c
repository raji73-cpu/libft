/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:19:11 by abraji            #+#    #+#             */
/*   Updated: 2024/11/10 16:48:49 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c) && ((i == 0) || (s[i - 1] == c)))
			count++;
		i++;
	}
	return (count);
}

static char	*countlen(const char *s, int i, char c)
{
	char	*ptr;
	int		x;
	int		t;

	x = 0;
	t = i;
	while (s[i] && s[i] != c)
	{
		x++;
		i++;
	}
	ptr = malloc((x + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[t] && s[t] != c)
		ptr[i++] = s[t++];
	ptr[i] = '\0';
	return (ptr);
}

static char	**ft_free(char **str, int k)
{
	while (k >= 0)
	{
		free(str[k--]);
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	str = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			str[k] = countlen(s, i, c);
			if (!str[k])
				return (ft_free(str, k));
			k++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	str[k] = NULL;
	return (str);
}
/*
int	main(void)
{
	char	**result;
	char	*test_str;
	char	delimiter;
	int		i;

	test_str = "Hello, world! This is a test string.";
	delimiter = ' ';
	i = 0;
	result = ft_split(test_str, delimiter);
	printf("Split result:\n");
	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		i++;
	}
	return (0);
}
*/
