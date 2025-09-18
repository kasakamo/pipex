/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 03:01:07 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:43:47 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>
// int main()
// {
// 	char *src = "Hello, world!";
// 	char *cpy = ft_strdup(src);
// 	if (!cpy)
// 	{
// 		printf("failed\n");
// 		return (1);
// 	}
// 	printf("src: %s > cpy: %s\n", src, cpy);
// 	free(cpy);
// }
