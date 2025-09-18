/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:23:14 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:50:35 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}

// #include <stdio.h>
// int main()
// {
// 	char c1 = 'A';
// 	char c2 = 'b';
// 	printf("%c\n", ft_tolower(c1));
// 	printf("%c\n", ft_tolower(c2));
// }
