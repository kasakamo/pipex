/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:06:36 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:41:01 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	const char data[] = "Hello, world!";
// 	int chars[] = {'o', ',', 'z', '\0'};
// 	size_t sizes[] = {13, 5, 13, 13};
// 	for (int i = 0; i < 4; i++)
// 	{
// 		char ch = chars[i];
// 		size_t sz = sizes[i];
// 		void *res = ft_memchr(data, ch, sz);
// 		printf("keyword: '%c', range: %zubyte, %s\n",
// 			ch == '\0' ? '0' : ch,
// 			sz, res ? (char *)res : "NULL");
// 	}
// }
