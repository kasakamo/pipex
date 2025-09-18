/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 02:48:18 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:45:13 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int main()
// {
// 	char str1[16] = "abc";
// 	char str2[16] = "徳川家康";
// 	printf("%zu\n", ft_strlen(str1));
// 	printf("%zu\n", ft_strlen(str2));
// }
