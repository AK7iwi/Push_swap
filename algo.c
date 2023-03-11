/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/02/21 22:58:35 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort2val(t_listdc *a)
{
    if(is_sorted(a) == 1)
			sa(a);
}


void sort(t_listdc *a, t_listdc *b)
{   
    
    int pivot;
    t_stack *tmp;
    if(!a->first)
        return;
    tmp = a->first->next;
    pivot = a->first->value;
    
    while(tmp)
    {
        if(pivot < tmp->value)
            pb(a,b);
        else 
            tmp = tmp->next;
    }
    sort(a,b);
}

