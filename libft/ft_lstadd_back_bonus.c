/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:16:11 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:39:48 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew("1st");
// 	t_list *n2 = ft_lstnew("2nd");
// 	t_list *n3 = ft_lstnew("3rd");
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
// }
