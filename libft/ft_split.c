/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:09:12 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:42:03 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	cnt_w(char const *s, char c)
{
	int	cnt;
	int	f;

	cnt = 0;
	f = 0;
	while (*s)
	{
		if (*s != c && f == 0)
		{
			f = 1;
			cnt++;
		}
		else if (*s == c)
			f = 0;
		s++;
	}
	return (cnt);
}

char	*dup_w(char const *start, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (start[len] && start[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	free_all(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			i;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (cnt_w(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			res[i] = dup_w(s, c);
			if (!res[i])
				return (free_all(res, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "hello";
// 	char **arr = ft_split(str, ' ');
// 	for (int i = 0; arr[i]; i++)
// 	{
// 		printf("[%d] %s\n", i, arr[i]);
// 		free(arr[i]);
// 	}
// 	free(arr);
// }
