/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:50:42 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:50:02 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	set_n(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && set_n(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && set_n(s1[end - 1], set))
		end--;
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, &s1[start], end - start);
	res[end - start] = '\0';
	return (res);
}

// #include <stdio.h>
// int main() // compile with ft_strlen.c & ft_memcpy.c
// {
// 	char str[] = "abc";
// 	char set[] = "";
// 	char *res = ft_strtrim(str, set);
// 	printf("%s\n", res);
// 	free(res);
// }
