/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:45:29 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/05 21:14:32 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		if (lst->value > lst->next->value)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_lstmin(t_stack *lst)
{
	int		min;
	t_stack	*node;

	if (!lst)
		return (0);
	min = lst->value;
	node = lst;
	while (node != NULL)
	{
		if (node->value < min)
			min = node->value;
		node = node->next;
	}
	return (min);
}

int	ft_lstmax(t_stack *lst)
{
	int		max;
	t_stack	*node;

	if (!lst)
		return (0);
	max = lst->value;
	node = lst;
	while (node != NULL)
	{
		if (node->value > max)
			max = node->value;
		node = node->next;
	}
	return (max);
}

int	find_min_pos(t_stack *tmp)
{
	int		min;
	int		i;

	min = ft_lstmin(tmp);
	i = 1;
	while (tmp)
	{
		if (tmp->value == min)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	find_max_pos(t_stack *tmp)
{
	int	max;
	int	i;

	max = ft_lstmax(tmp);
	i = 1;
	while (tmp)
	{
		if (tmp->value == max)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}
