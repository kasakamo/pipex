/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:21:06 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:41:22 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (d > s)
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
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
// 	ft_memmove(buf2, buf1, atoi(av[1]));
// 	ft_memmove(&buf1[2], &buf1[0], atoi(av[1]));
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);
// }
