/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 07:54:38 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:40:03 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// #include <stdio.h>
// void del_cont(void *content)
// {
// 	printf("freeing content: %s\n", (char *)content);
// 	free(content);
// }
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew(strdup("abcdef"));
// 	t_list *n2 = ft_lstnew(strdup("ghijkl"));
// 	t_list *n3 = ft_lstnew(strdup("mnopqr"));
// 	ft_lstadd_back(&head, n1);
// 	ft_lstadd_back(&head, n2);
// 	ft_lstadd_back(&head, n3);
// 	t_list *tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\nv\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");
// 	ft_lstclear(&head, del_cont);
// 	printf("clear node.\n");
// }
