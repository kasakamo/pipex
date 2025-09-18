/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 23:04:02 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:42:08 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char str[16] = "teste";
// 	char *c = 0;
// 	int num;
// 	c = ft_strchr(str, 'e');
// 	// c = ft_strchr(str, 'a');
// 	if (c == 0)
// 	{
// 		printf("404 Do not found.");
// 		return (1);
// 	}
// 	num = c - &str[0] + 1;
// 	printf("a: %d\n", num);
// }
