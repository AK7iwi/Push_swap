/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/01 22:11:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_back(t_stack **lst, int val)
{
	t_stack		*new_node;
	t_stack		*last;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = val;
	new_node->next = NULL;
	if (*lst == NULL)
		*lst = new_node;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
}

int	ft_dlstsize(t_stack *lst)
{
	int		size;

	if (!lst)
		return (0);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

void	ft_dlstfree(t_stack **lst)
{
	t_stack	*current;
	t_stack	*temp;

	if (lst && *lst)
	{
		current = *lst;
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*lst = NULL;
	}
}

void	ft_freeall(t_stack **a, t_stack **b)
{
	ft_dlstfree(a);
	ft_dlstfree(b);
}
