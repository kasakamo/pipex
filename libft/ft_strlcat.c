/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:36:15 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:44:59 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	max;
	unsigned int	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	max = size - d_len - 1;
	i = 0;
	while (i < max)
	{
		if (src[i] == '\0')
			break ;
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

// #include <stdio.h>
// int main() // compile with ft_strlen.c
// {
// 	char dst1[20] = "ABCDE";
// 	char dst2[20] = "ABCDE";
// 	char dst3[20] = "ABCDE";
// 	char src[] = "1234";
// 	printf("%s: %zu\n", dst1, ft_strlcat(dst1, src, 2));
// 	printf("%s: %zu\n", dst2, ft_strlcat(dst2, src, 7));
// 	printf("%s: %zu\n", dst3, ft_strlcat(dst3, src, 13));
// }
