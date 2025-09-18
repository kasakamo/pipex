/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:11:21 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:49:42 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j]
			&& big[i + j] == little[j]
			&& (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char *res = ft_strnstr("Hello, World", "World", 13);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("Hello, World", "World", 5);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("abcdef", "def", 6);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("abcdef", "def", 5);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("abcdef", "", 6);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("", "abc", 6);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("abcdef", "gh", 6);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("aaa", "aa", 2);
// 	printf("%s\n", res ? res : "NULL");
// 	res = ft_strnstr("", "xx", 5);
// 	printf("%s\n", res ? res : "NULL");
// }
