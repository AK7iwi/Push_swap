/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:20:55 by mfeldman          #+#    #+#             */
/*   Updated: 2023/02/21 20:40:31 by mfeldman         ###   ########.fr       */
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
        write(1,"sb\n", 3);
    }
}

void ss(t_listdc *a, t_listdc *b)
{
    sa(a);
    sa(b);
    ft_putstr_fd("ss\n", 1);
}



void pa(t_listdc *a, t_listdc *b)
{
    if(b->first)
    {
        ft_dlstadd_front(a, b->first->value);
        ft_dlstpop_front(b);
        ft_putstr_fd("pa\n", 1);
    }
}

void pb(t_listdc *a, t_listdc *b)
{
    if(a->first)
    {
        ft_dlstadd_front(b, a->first->value);
        ft_dlstpop_front(a);
        ft_putstr_fd("pb\n", 1);
    }
    
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
        ft_putstr_fd("ra\n", 1);
    }
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
        ft_putstr_fd("rb\n", 1);
    }
}

void rr(t_listdc *a, t_listdc *b)
{
    ra(a);
    rb(b);
    ft_putstr_fd("rr\n", 1);
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
        ft_putstr_fd("rra\n", 1);
    }
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
        ft_putstr_fd("rrb\n", 1);
    }
}


void rrr(t_listdc *a, t_listdc *b)
{
    rra(a);
    rrb(b);
    ft_putstr_fd("rrr\n", 1);
}
