/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:05:57 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:39:44 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cnt_n(long n)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
	{
		n = -n;
		cnt++;
	}
	if (n == 0)
		cnt++;
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = cnt_n(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[len - 1] = num + '0';
	while (num > 0)
	{
		str[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	char *str = ft_itoa(atoi(av[1]));
// 	printf("%s\n", str);
// 	free(str);
// }
