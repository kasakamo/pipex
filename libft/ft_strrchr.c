/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:47:09 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:49:57 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last = (char *)str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (last);
}

// #include <stdio.h>
// int main()
// {
// 	char str[16] = "tokugawaieyasu";
// 	char *c = 0;
// 	int num;
// 	c = ft_strrchr(str, 'a');
// 	if (c == 0)
// 	{
// 		printf("404 Do not found.");
// 		return (1);
// 	}
// 	num = c - &str[0] + 1;
// 	printf("a: %d\n", num);
// }
