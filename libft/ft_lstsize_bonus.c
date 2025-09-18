/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 06:19:57 by kasakamo          #+#    #+#             */
/*   Updated: 2025/05/11 07:40:44 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *n1 = ft_lstnew("1st");
// 	t_list *n2 = ft_lstnew("2nd");
// 	t_list *n3 = ft_lstnew("3rd");
// 	ft_lstadd_front(&n1, n2);
// 	ft_lstadd_front(&n1, n3);
// 	int size = ft_lstsize(n1);
// 	printf("%d\n", size);
// }
