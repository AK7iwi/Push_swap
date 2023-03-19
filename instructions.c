/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:20:55 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/19 18:12:13 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*fcts instructions*/

void sa(t_listdc *a)
{
    if (a->first && a->first->next)
    {
        int tmp;
        tmp = a->first->value;
        a->first->value = a->first->next->value;
        a->first->next->value = tmp;
    }
    write(1,"sa\n", 3);
}

void sb(t_listdc *b)
{
    if (b->first && b->first->next)
    {
        int tmp;
        tmp  = b->first->value;
        b->first->value = b->first->next->value;
        b->first->next->value = tmp;
    }
	write(1,"sb\n", 3);
}

void ss(t_listdc *a, t_listdc *b)
{
    sa(a);
    sa(b);
    write(1,"ss\n", 3);
}

void ra(t_listdc *a)
{
    if (a->first != NULL && a->first != a->last)
    {
        t_stack *first_elem;
        
        first_elem = a->first;
        a->first = a->first->next;
        a->last->next = first_elem;
        first_elem->prev = a->last;
        a->last = first_elem;
        a->last->next = NULL;
        
    }
	write(1,"ra\n", 3);
}

void rb(t_listdc *b)
{
    if (b->first != NULL && b->first != b->last)
    {
        t_stack *first_elem;
        first_elem = b->first;
        b->first = b->first->next;
        b->last->next = first_elem;
        first_elem->prev = b->last;
        b->last = first_elem;
        b->last->next = NULL;
    }
	write(1,"rb\n", 3);
}

void pa(t_listdc *a, t_listdc *b)
{
    if(b->first)
    {
        ft_dlstadd_front(a, b->first->value);
        ft_dlstpop_front(b);
    }
	write(1,"pa\n", 3);
}

void pb(t_listdc *a, t_listdc *b)
{
    if(a->first)
    {
        ft_dlstadd_front(b, a->first->value);
        ft_dlstpop_front(a);
    }
	write(1,"pb\n", 3);
}

void rr(t_listdc *a, t_listdc *b)
{
    ra(a);
    rb(b);
    write(1,"rr\n", 3);
}

void rra(t_listdc *a)
{
    if (a->first != NULL && a->first != a->last)
    {
        t_stack *last_elem;
        last_elem = a->last;
        a->last = a->last->prev;
        a->last->next = NULL;
        last_elem->prev = NULL;
        last_elem->next = a->first;
        a->first->prev = last_elem;
        a->first = last_elem;
    }
	write(1,"rra\n", 3);
}


void rrb(t_listdc *b)
{
    if (b->first != NULL && b->first != b->last)
    {
        t_stack *last_elem;
        last_elem = b->last;
        b->last = b->last->prev;
        b->last->next = NULL;
        last_elem->prev = NULL;
        last_elem->next = b->first;
        b->first->prev = last_elem;
        b->first = last_elem;
    }
	 write(1,"rrb\n", 3);
}


void rrr(t_listdc *a, t_listdc *b)
{
    rra(a);
    rrb(b);
    write(1,"rrr\n", 3);
}