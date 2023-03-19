/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/19 19:23:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void sort3val(t_listdc *a)
{	
	if(a->first->value > a->first->next->value && a->last->value > a->first->value)
		sa(a);
}

void sort(t_listdc *a,t_listdc *b)
{   
    int pivot;
    t_stack *tmp;
    tmp = a->first->next;
    pivot = a->first->value;
	if(!a->first)
    	return;
    while(tmp)
    {
        if(pivot < tmp->value)
			pb(a,b);
		tmp = tmp->next;
    }
}