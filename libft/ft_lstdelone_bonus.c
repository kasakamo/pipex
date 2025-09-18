/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 07:35:41 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:40:09 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>
// void del_cont(void *content)
// {
// 	printf("freeing content: %s\n", (char *)content);
// 	free(content);
// }
// int main()
// {
// 	char *str = strdup("abcdef");
// 	t_list *node = ft_lstnew(str);
// 	if (!node)
// 	{
// 		printf("can't create node.\n");
// 		return (1);
// 	}
// 	printf("node: %s\n", (char *)node->content);
// 	ft_lstdelone(node, del_cont);
// 	printf("clear node.\n");
// }
