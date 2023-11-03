/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:28:05 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/19 11:09:25 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

// int main()
// {
//     t_list *list = NULL;
//     t_list *item1 = (t_list *)malloc(sizeof(t_list));
//     t_list *item2 = (t_list *)malloc(sizeof(t_list));
//     item1->content = "premier";
//     item1->next = NULL;
//     item2->content = "deuxieme";
//     item2->next = NULL;
//     ft_lstadd_back(&list, item1);
//     ft_lstadd_back(&list, item2);
//     free(item1);
//     free(item2);
//     return 0;
// }
