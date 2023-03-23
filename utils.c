/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/23 19:33:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// void ft_dlstadd_front(t_stack **l, int val)
// {
// 	t_stack *new_node;

// 	new_node = malloc(sizeof(t_stack));
// 	if (!new_node)
// 		return ;
// 	new_node->value = val;
// 	if (!*l)
// 	{
// 		new_node->next = new_node;
// 		new_node->prev = new_node;
// 	}
// 	else
// 	{
// 		new_node->next = *l;
// 		new_node->prev = (*l)->prev;
// 		(*l)->prev->next = new_node;
// 		(*l)->prev = new_node;
// 	}
// 	*l = new_node;
// }

void ft_dlstadd_front(t_stack **l, int val)
{
	t_stack *new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = val;
	new_node->prev = NULL;
	new_node->next = (*l);
	if ((*l) != NULL)
		(*l)->prev = new_node;
	(*l) = new_node;
}


void ft_dlstadd_back(t_stack **l, int val)
{
	t_stack *new_node;
	t_stack	*last;
	
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ; 
	new_node->value = val;
	new_node->next = NULL;

	if (*l == NULL)
		*l = new_node;
	else
	{
		last = *l;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}

}

int		ft_dlstsize(t_stack *lst)
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
