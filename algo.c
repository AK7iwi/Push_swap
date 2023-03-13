/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:30:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/13 17:26:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort2val(t_listdc *a)
{
    if(is_sorted(a) == 1)
			sa(a);
}


// void sort(t_listdc *a,t_listdc *b)
// {   
//     int pivot;
//     t_stack *tmp;
//     tmp = a->first->next;
//     pivot = a->first->value;
// 	if(!a->first)
//         return; 
//     while(tmp)
//     {
//         if(pivot < tmp->value)  
// 			pb(a,b);
// 		tmp = tmp->next;
//     }
// }

void sort(t_listdc *a,t_listdc *b)
{   
    int pivot;
    // t_stack *tmp;
    // tmp = a->first->next;
    pivot = a->first->value;
	if(!a->first)
        return; 
    while(a->first) 
    {
        if(pivot < a->first->value)  
			pb(a,b);
		a->first = a->first->next;
    }
}