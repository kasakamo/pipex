/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 06:34:13 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:40:24 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
// 	t_list *last = ft_lstlast(n3);
// 	if (last)
// 		printf("last: %s\n", (char *)last->content);
// 	else
// 		printf("empty in the list");
// 	t_list *tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\nv\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");
// }
