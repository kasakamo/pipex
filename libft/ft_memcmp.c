/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:01:10 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:41:05 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "abcdef";
// 	char s2[] = "abcdez";
// 	char s3[] = "abcdef";
// 	char s4[] = "abcdEf";
// 	char s5[] = "";
// 	printf("%d\n", ft_memcmp(s1, s2, 6));
// 	printf("%d\n", ft_memcmp(s1, s3, 6));
// 	printf("%d\n", ft_memcmp(s1, s4, 6));
// 	printf("%d\n", ft_memcmp(s1, s5, 0));
// 	printf("%d\n", ft_memcmp(s1, s2, 3));
// }
