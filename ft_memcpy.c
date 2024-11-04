/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoriyam <kmoriyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:09:48 by kmoriyam          #+#    #+#             */
/*   Updated: 2024/11/04 17:07:30 by kmoriyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_p;
	unsigned char	*src_p;

	i = 0;
	dest_p = (unsigned char *)dest;
	src_p = (unsigned char *)src;
	while (i < n)
	{
		dest_p[i] = src_p[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[7] = "B";
// 	// memcpy(str, str+3, 0);
// 	printf("c :%s\n", (char *)memcpy(str, str+3, 0));
// 	char str2[7] = "A";
// 	// ft_memcpy(NULL, str2, 0);
// 	printf("my:%s\n", (char *)ft_memcpy(NULL, str2, 0));
// }
