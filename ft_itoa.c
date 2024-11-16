/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:30:50 by abraji            #+#    #+#             */
/*   Updated: 2024/11/10 16:30:37 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_and_sign(int *n, int *sign)
{
	int				count;
	unsigned int	i;
	unsigned int	nb;

	count = 0;
	*sign = 0;
	if (*n == 0)
		return (1);
	if (*n < 0)
	{
		count++;
		*n = -(*n);
		*sign = 1;
	}
	nb = *n;
	i = nb;
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				sign;
	int				count;
	unsigned int	nb;
	char			*str;

	count = count_and_sign(&n, &sign);
	nb = n;
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (count > sign)
	{
		str[count - 1] = nb % 10 + '0';
		nb = nb / 10;
		count--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	int		i;
	char	*result;
	int		numbers[] = {-123, 456, 789, 0, -2147483648};

		// Only positive numbers and zero
	printf("Testing ft_itoa with positive numbers:\n");
	for (i = 0; i < 5; i++)
	{
		result = ft_itoa(numbers[i]);
		if (result)
		{
			printf("ft_itoa(%d) = %s\n", numbers[i], result);
			free(result); // Free the allocated memory if ft_itoa uses malloc
		}
		else
		{
			printf("ft_itoa(%d) returned NULL\n", numbers[i]);
		}
	}
	return (0);
}
*/
