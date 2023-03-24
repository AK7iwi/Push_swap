/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 04:01:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/24 06:22:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort6to100val(t_stack **a, t_stack **b)
{
    int i;
    int j;
    int min1;
    int min2;
    t_stack *tmp;
    t_stack *tmp2;

    i = ft_dlstsize(*a) / 2;
    tmp = ft_dlstcpy1(&a, i);
    tmp2 = ft_dlstcpy2(&a, i);
    min1 = ft_dlstmin(tmp);
    min2 = ft_dlstmin(tmp2);
    while(j < i)
    {
        j++;
        if(tmp->value == min1)
			break;
       tmp = tmp->next;
    }
    j = 0;
    while(j < ft_dlstsize(tmp2) - i)
    {
        if(tmp2->value == min2)
            break;
        j--;
        tmp2 = tmp2->next;
    }
}

t_stack ft_dlstcpy1(t_stack **a,  int i)
{
    int j;
    t_stack *tmp;
    j = 0;
    tmp = malloc(sizeof(t_stack));
    if (!tmp)
		return(NULL); 
    while(j < i)
    {
        tmp = *a;
        *a = (*a)->next;
        tmp = tmp->next;
        j++;
    }
    return (tmp);
}
  
t_stack ft_dlstcpy2(t_stack **a,  int i)
{
    int j;
    t_stack *tmp;
    j= 0;
    tmp = malloc(sizeof(t_stack));
    if (!tmp)
		return(NULL); 
    while(j < i)
    {
        *a = (*a)->next; 
        j++;
    }
    while(j < ft_dlstsize(*a))
    {
        tmp = *a;
        *a = (*a)->next;
        tmp = tmp->next;
        j++;
    }
    return(tmp);
}

//une seul fonction pour copie 

//void sort6to100val(t_stack **a, t_stack **b)
// t_stack *tmp;
// t_stack *tmp2;
// j = 0;
// while(j < i)
//     {
//         tmp = *a;
//         *a = (*a)->next;
//         tmp = tmp->next;
//         j++;
//     }
//     while(j < ft_dlstsize(*a))
//     {
//         tmp2 = *a;
//         *a = (*a)->next;
//         tmp2 = tmp2->next;
//         j++;
//     }
//     return(tmp);