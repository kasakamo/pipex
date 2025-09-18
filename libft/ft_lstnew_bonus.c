/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:15:03 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:40:37 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>
// int main()
// {
// 	char *data = "Hello, Libft!";
// 	t_list *node = ft_lstnew(data);
// 	if (node)
// 	{
// 		printf("node: %s\n", (char *)node->content);
// 		if (node->next == NULL)
// 			printf("next node is NULL.\n");
// 		else
// 			printf("next node is error.\n");
// 	}
// 	else
// 		printf("can't create node.\n");
// 	free(node);
// }
