/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:31:35 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:44:07 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < len1)
		res[i] = s1[i];
	i = -1;
	while (++i < len2)
		res[i + len1] = s2[i];
	res[i + len1] = '\0';
	return (res);
}

// #include <stdio.h>
// int main() // compile with ft_strlen.c
// {
// 	char str1[] = "Hello,";
// 	char str2[] = " world!";
// 	char *res = ft_strjoin(str1, str2);
// 	printf("%s\n", res);
// 	free(res);
// }
