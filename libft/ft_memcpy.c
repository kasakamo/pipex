/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:06:25 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:41:16 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	char buf1[10] = "abcdef";
// 	char buf2[10] = "*********";
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n--------------\n", buf2);
// 	ft_memcpy(buf2, buf1, atoi(av[1]));
// 	ft_memcpy(&buf1[2], &buf1[0], atoi(av[1]));
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);
// }
