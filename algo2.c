/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/24 14:43:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void presort6to100val(t_stack **a, t_stack *tmp, t_stack *tmp2, int i)
{
    int j;
    j = 0;
    
    while(j <= i)
    {
        tmp = *a;
        *a = (*a)->next;
        tmp = tmp->next;
        j++;
    }
    j++;
    while(j <= ft_dlstsize(*a))
    {
        tmp2 = *a;
        *a = (*a)->next;
        tmp2 = tmp2->next;
        j++;
    }
}

int find_low_pos(t_stack * tmp)
{
    int min;
    int pos;

    min = ft_dlstmin(tmp);
    pos = 0;
    while(tmp)
    {
        pos++;
        if(tmp->value == min)
            break;
        tmp = tmp->next;
    }
    return(pos);
}
void sort6to100val(t_stack **a, t_stack **b)
{
    int i;

    t_stack *tmp;
    t_stack *tmp2;

    i = ft_dlstsize(*a) / 2;
    presort6to100val(a, tmp, tmp2,i);
    if(find_low_pos(tmp) < ft_dlstsize(*a) - find_low_pos(tmp2))
    {
        while(find_low_pos(tmp) != 0)
            ra(a);
    }
    else if (find_low_pos(tmp) == ft_dlstsize(*a) - find_low_pos(tmp2))
    {
        while(find_low_pos(tmp) != 0)
            ra(a);
    }
    else
    {
        while(find_low_pos(tmp2) != ft_dlstsize(*a))
            rra(a);
    }
    pb(a, b);
}