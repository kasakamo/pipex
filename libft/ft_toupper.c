/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:12 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:50:44 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c += 'A' - 'a';
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	char c1 = 'A';
// 	char c2 = 'b';
// 	printf("%c\n", ft_toupper(c1));
// 	printf("%c\n", ft_toupper(c2));
// }
