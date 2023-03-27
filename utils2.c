/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:45:29 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/27 10:14:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
    {
        if (lst->value > lst->next->value)
            return (0);
        lst = lst->next;
    }
	return (1);
}

int	ft_dlstmin(t_stack *lst)
{
	int		min;
	t_stack	*node;

	if (!lst)
		return (0);
	min = lst->value;
	node = lst;
	while (node != NULL)
	{
		if (node->value < min)
			min = node->value;
		node = node->next;
	}
	return (min);
}

int	ft_dlstmax(t_stack *lst)
{
	int		max;
	t_stack	*node;

	if (!lst)
		return (0);
	max = lst->value;
	node = lst;
	while (node != NULL)
	{
		if (node->value > max)
			max = node->value;
		node = node->next;
	}
	return (max);
}

int find_min_pos(t_stack *tmp)
{
    int min;
	int i;
    int pos;

    min = ft_dlstmin(tmp);
    i = 0;
    while(tmp)
    {
        if(tmp->value == min)
            pos = i;
        tmp = tmp->next;
		i++;
    }
    return(pos);
}

int find_max_pos(t_stack *tmp)
{
    int max;
	int i;
    int pos;
	
    max = ft_dlstmax(tmp);
    i = 0;
    while(tmp)
    {
        if(tmp->value == max)
			pos = i;
        tmp = tmp->next;
		i++;
    }
    return(pos);
}

// int find_pos(t_stack *tmp, int i)
// {
//     int pos;
	
//     pos = 0;
//     while(tmp)
//     {
//         pos++;
//         if(tmp->value == i)
//             break;
//         tmp = tmp->next;
//     }
//     return(pos);
// }

// void	ft_putstr(char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i++])
// 		write(1, &str[i], 1);
// }