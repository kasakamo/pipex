/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 08:10:50 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:40:16 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// void to_uppercase(void *content)
// {
// 	char *str = (char *)content;
// 	while (*str)
// 	{
// 		if ('a' <= *str && *str <= 'z')
// 			*str += 'A' - 'a';
// 		str++;
// 	}
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
// 	printf("before\n");
// 	t_list *tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\nv\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");
// 	ft_lstiter(head, to_uppercase);
// 	printf("after\n");
// 	tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\nv\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");
// 	ft_lstclear(&head, free);
// }
