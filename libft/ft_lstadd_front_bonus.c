/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:17:35 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:39:56 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *head = NULL;
// 	t_list *n1 = ft_lstnew("1st");
// 	t_list *n2 = ft_lstnew("2nd");
// 	t_list *n3 = ft_lstnew("3rd");
// 	ft_lstadd_front(&head, n1);
// 	ft_lstadd_front(&head, n2);
// 	ft_lstadd_front(&head, n3);
// 	t_list *tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\nv\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");
// }
