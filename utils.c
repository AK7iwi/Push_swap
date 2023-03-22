/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/22 14:51:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*Ajouter un element a la stack*/

void ft_dlstadd_front(t_listdc *l, int val)
{
	t_stack *new;
	new =  malloc(sizeof(t_stack));
	if(!new)
		return ;
	new->value = val;
	new->prev = NULL;
	new->next = l->first;
	if(l->first) 
   		l->first->prev = new;
	else 
		l->last = new;
	l->first = new;
	
}

// int  ft_dlstadd_back(t_listdc *l, int val)
// {
// 	return(i) ##lstsize
// }

void ft_dlstadd_back(t_listdc *l, int val)
{
    t_stack *new;
    new = malloc(sizeof(t_stack));
    if (!new)
		return;
	new->value = val;
    new->prev = l->last;
    new->next = NULL;
    if (l->last)
    	l->last->next = new;
    else
    	l->first = new;
    l->last = new;
}

/*Taille liste doublement chainee */ // 

int	ft_dlstsize(t_listdc *l)
{
	int	i;
	t_stack *pelem;

	i = 0;
	pelem = l->first;
	while (pelem)
	{
		i++;
		pelem = pelem->next;
	}
	return (i);
}

/*Free la liste doublement chainee*/

void	ft_dlstfree(t_listdc *l)
{
	t_stack *pelem;
	while (l->first)
	{
		free(l->first);
		pelem = l->first;
		l->first = pelem->next;
	}
	l->last = NULL;
	l->first = NULL;
}






