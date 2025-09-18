/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 02:02:56 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:38:58 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;
	size_t	i;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	int *arr;
// 	size_t i, num = 5;
// 	arr = (int *)ft_calloc(num, sizeof(int));
// 	if (!arr)
// 		printf("failed\n");
// 	for(i = 0; i < num; i++)
// 		printf("arr[%zu] = %d\n", i, arr[i]);
// 	free(arr);
// }
