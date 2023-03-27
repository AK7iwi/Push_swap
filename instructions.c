/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:20:55 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 01:36:08 by mfeldman         ###   ########.fr       */
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
    write(2, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int     temp;

    if (!b || !b->next)
        return ;
    temp = b->value;
    b->value = b->next->value;
    b->next->value = temp;
    write(2, "sb\n", 3);
}


void ss(t_stack *a, t_stack *b)
{
    sa(a);
    sa(b);
    write(1,"ss\n", 3);
}

void	ra(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	first = *stack_a;
	last = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
}

void	rb(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;

	first = *stack_b;
	last = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
}

void rr(t_stack **a, t_stack **b)
{
    ra(a);
    rb(b);
    write(1,"rr\n", 3);
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp_stack;

    if (*stack_b == NULL)
        return;
    tmp_stack = *stack_b;
    (*stack_b) = tmp_stack->next;
    tmp_stack->next = NULL;
    if (*stack_a == NULL)
        (*stack_a) = tmp_stack;
    else
    {
        tmp_stack->next = (*stack_a);
        (*stack_a) = tmp_stack;
    }
    write(1, "pa\n", 3);
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp_stack;

    if (*stack_a == NULL)
        return;
    tmp_stack = *stack_a;
    (*stack_a) = tmp_stack->next;
    tmp_stack->next = NULL;
    if (*stack_b == NULL)
        (*stack_b) = tmp_stack;
    else
    {
        tmp_stack->next = (*stack_b);
        (*stack_b) = tmp_stack;
    }
    write(1, "pb\n", 3);
}


void	rra(t_stack **stack_a)
{
	t_stack	*sec_last;
	t_stack	*last;

	sec_last = NULL;
	last = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	write(1,"rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	t_stack	*sec_last;
	t_stack	*last;

	sec_last = NULL;
	last = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	write(1,"rrb\n", 4);
	
}
	

void rrr(t_stack **a, t_stack **b)
{
    rra(a);
    rrb(b);
    write(1,"rrr\n", 4);
}