/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:34:02 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:38:39 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = 0;
	return ;
}

// #include <stdio.h>
// void	print_bytes(const void *p, size_t n)
// {
// 	const unsigned char *bytes = p;
// 	for (size_t i = 0; i < n; i++)
// 		printf("%02x ", bytes[i]);
// 	printf("\n");
// }
// int main()
// {
// 	char buf1[10];
// 	char buf2[10];
// 	for (int i = 0; i < 10; i++)
// 	{
// 		buf1[i] = 'A';
// 		buf2[i] = 'A';
// 	}
// 	ft_bzero(buf2, 5);
// 	printf("buf1: ");
// 	print_bytes(buf1, 10);
// 	printf("buf2: ");
// 	print_bytes(buf2, 10);
// }
