/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:28:54 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:43:08 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	evup_func(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && 'a' <= *c && *c <= 'z')
// 		*c += 'A' - 'a';
// }
// int main()
// {
// 	char str[] = "abcdef";
// 	ft_striteri(str, evup_func);
// 	printf("%s\n", str);
// }
