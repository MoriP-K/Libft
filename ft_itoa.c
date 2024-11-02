/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoriyam <kmoriyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:25:16 by kmoriyam          #+#    #+#             */
/*   Updated: 2024/10/29 18:25:38 by kmoriyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_numlen(int n)
{
	size_t			i;
	unsigned int	un;

	i = 0;
	if (n <= 0)
	{
		un = (unsigned int)(-(long)n);
		i++;
	}
	else
		un = (unsigned int)n;
	while (un > 0)
	{
		un = un / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	un;

	len = ft_numlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		un = (unsigned int)(-n);
	}
	else
		un = (unsigned int)n;
	if (un == 0)
		str[len--] = '0';
	while (un > 0)
	{
		str[len--] = (un % 10) + '0';
		un = un / 10;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	int n = 2147483648;
// 	printf("%s\n", ft_itoa(n));
// }