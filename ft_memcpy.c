/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoriyam <kmoriyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:09:48 by kmoriyam          #+#    #+#             */
/*   Updated: 2024/11/02 16:58:18 by kmoriyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_p;
	const unsigned char	*src_p = (const unsigned char *)src;

	if (!dest || !src)
		return (NULL);
	i = 0;
	dest_p = (unsigned char *)dest;
	while (i < n)
	{
		dest_p[i] = src_p[i];
		i++;
	}
	return (dest_p);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[7] = "1234567";
// 	memcpy(str, str+4, 2);
// 	printf("c :%s\n", str);
// 	char str2[7] = "1234567";
// 	ft_memcpy(str2, str2+4, 2);
// 	printf("my:%s\n", str2);
// }
