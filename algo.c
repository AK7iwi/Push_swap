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


void sort(t_listdc *a)
{   
    
    t_listdc b;
    int pivot;

    ft_dlstinit(&b);
    pivot = a->first->value;
    if(pivot > a->first->next->value)
        pb(a,&b);
}
