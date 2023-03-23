/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:20:55 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/23 16:42:42 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*fcts instructions*/


void    sa(t_stack *a)
{
    int     temp;

    if (!a || !a->next)
        return ;
    temp = a->value;
    a->value = a->next->value;
    a->next->value = temp;
    write(1, "sa\n", 3);
}



void	sb(t_stack *b)
{
	int     temp;

    if (!b || !b->next)
        return ;
    temp = b->value;
    b->value = b->next->value;
    b->next->value = temp;
    write(1, "sb\n", 3);
}


void ss(t_stack *a, t_stack *b)
{
    sa(a);
    sa(b);
    write(1,"ss\n", 3);
}

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (!a || !a->next)
		return ;
	first = a->next;
	last = a->prev;
	a->next = first->next;
	a->prev = first;
	first->next = a;
	first->prev = last;
	last->next = first;
    write(1,"ra\n", 3);
}

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	if (!b || !b->next)
		return ;
	first = b->next;
	last = b->prev;
	b->next = first->next;
	b->prev = first;
	first->next = b;
	first->prev = last;
	last->next = first;
    write(1,"rb\n", 3);
}

void rr(t_stack **a, t_stack **b)
{
    ra(a);
    rb(b);
    write(1,"rr\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*top_b;

	if (!b || !b->next)
		return ;
	top_b = b->next;
	top_b->prev = a;
	top_b->next = a->next;
	a->next->prev = top_b;
	a->next = top_b;
	b->next = top_b->next;
	b->next->prev = b;
    write(1,"pa\n", 3);
}



void	pb(t_stack **a, t_stack **b)
{
	t_stack	*top_a;

	if (!a || !a->next)
		return ;
	top_a = a->next;
	top_a->prev = b;
	top_a->next = b->next;
	b->next->prev = top_a;
	b->next = top_a;
	a->next = top_a->next;
	a->next->prev = a;
    write(1,"pb\n", 3);
}

void rrb(t_stack **b)
{
	t_stack *bottom_b;

	bottom_b = b->prev;
	bottom_b->next = b->next;
	b->next->prev = bottom_b;
	b->prev = bottom_b->prev;
	b->next = bottom_b;
	bottom_b->prev->next = b;
	bottom_b->prev = b;
	write(1, "rrb\n", 4);
}


void rrr(t_stack *a, t_stack *b)
{
    rra(a);
    rrb(b);
    write(1,"rrr\n", 4);
}