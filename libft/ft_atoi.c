/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:09:59 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:38:08 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	m;

	n = 0;
	m = 1;
	i = 0;
	while (nptr[i] == ' ' || (9 <= nptr[i] && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			m = -1;
		i++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (m * n);
}

// #include <stdio.h>
// int main()
// {
// 	char str1[16] = "2147483647";
// 	char str2[16] = "-2147483648";
// 	char str3[16] = "a123,456";
// 	char str4[16] = "   123 456";
// 	char str5[16] = "";
// 	char str6[16] = "-123456";
// 	char str7[16] = "--123456";
// 	int n = ft_atoi(str1);
// 	printf("char: %s > int: %d\n", str1, n);
// 	n = ft_atoi(str2);
// 	printf("char: %s > int: %d\n", str2, n);
// 	n = ft_atoi(str3);
// 	printf("char: %s > int: %d\n", str3, n);
// 	n = ft_atoi(str4);
// 	printf("char: %s > int: %d\n", str4, n);
// 	n = ft_atoi(str5);
// 	printf("char: %s > int: %d\n", str5, n);
// 	n = ft_atoi(str6);
// 	printf("char: %s > int: %d\n", str6, n);
// 	n = ft_atoi(str7);
// 	printf("char: %s > int: %d\n", str7, n);
// }
