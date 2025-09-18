/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:15:47 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:41:29 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = c;
	return (s);
}

// #include <stdio.h>
// int main()
// {
// 	char buf1[16];
// 	char buf2[16];
// 	ft_memset(buf1, '\0', 16);
// 	ft_memset(buf2, '\0', 16);
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);
// 	ft_memset(buf1, 'a', 4);
// 	ft_memset(buf1, 'b', 2);
// 	ft_memset(buf2, 'c', 3);
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);
// }
