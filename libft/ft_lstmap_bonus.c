/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 08:36:01 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:40:32 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*content;

	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}

// #include <stdio.h>
// void *dup_upper(void *content)
// {
// 	char *str = (char *)content;
// 	char *new = strdup(str);
// 	for (int i = 0; new[i]; i++)
// 		if ('a' <= new[i] && new[i] <= 'z')
// 			new[i] += 'A' - 'a';
// 	return (new);
// }
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *a = ft_lstnew(strdup("abcdef"));
// 	t_list *b = ft_lstnew(strdup("ghijkl"));
// 	t_list *c = ft_lstnew(strdup("mnopqr"));
// 	ft_lstadd_back(&head, a);
// 	ft_lstadd_back(&head, b);
// 	ft_lstadd_back(&head, c);
// 	t_list *lst = ft_lstmap(head, dup_upper, free);
// 	t_list *tmp = lst;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&head, free);
// 	ft_lstclear(&lst, free);
// }
