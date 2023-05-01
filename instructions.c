/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:20:55 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/01 21:40:41 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int		temp;

	if (!a || !a->next)
		return ;
	temp = a->value;
	a->value = a->next->value;
	a->next->value = temp;
	write (1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int		temp;

	if (!b || !b->next)
		return ;
	temp = b->value;
	b->value = b->next->value;
	b->next->value = temp;
	write (1, "sb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack		*tmp;

	if (*b == NULL)
		return ;
	tmp = *b;
	(*b) = tmp->next;
	tmp->next = NULL;
	if (*a == NULL)
		(*a) = tmp;
	else
	{
		tmp->next = (*a);
		(*a) = tmp;
	}
	write (1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack		*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	(*a) = tmp->next;
	tmp->next = NULL;
	if (*b == NULL)
		(*b) = tmp;
	else
	{
		tmp->next = (*b);
		(*b) = tmp;
	}
	write (1, "pb\n", 3);
}
