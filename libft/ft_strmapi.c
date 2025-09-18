/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:03:02 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:46:10 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < len)
		res[i] = f(i, s[i]);
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>
// char	evup_func(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && 'a' <= c && c <= 'z')
// 		return (c - 'a' + 'A');
// 	return (c);
// }
// int main() // compile with ft_strlen.c
// {
// 	char str[] = "abcdef";
// 	char *res = ft_strmapi(str, evup_func);
// 	printf("%s > %s\n", str, res);
// 	free(res);
// }
