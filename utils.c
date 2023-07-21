/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 03:50:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back_int(t_stack **lst, int val)
{
	t_stack		*new_node;
	t_stack		*last;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = val;
	new_node->next = NULL;
	if (*lst == NULL)
		*lst = new_node;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
}

int	ft_lstsize(t_stack *lst)
{
	int		size;

	if (!lst)
		return (0);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

void	ft_lstfree(t_stack **lst)
{
	t_stack	*current;
	t_stack	*temp;

	if (lst && *lst)
	{
		current = *lst;
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*lst = NULL;
	}
}

void	ft_freeall(t_stack **a, t_stack **b)
{
	ft_lstfree(a);
	ft_lstfree(b);
}

int	ft_atoi(const char *nptr)
{
	size_t		i;
	long long	j;
	int			cont;

	i = 0;
	j = 0;
	cont = 1;
	while (nptr[i] == ' ' || (nptr[i] <= 13 && nptr[i] >= 9))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			cont *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (j * cont > 2147483647)
			return (-1);
		else if (j * cont < -2147483648)
			return (0);
		j = j * 10 + nptr[i] - '0';
		i++;
	}
	return (j * cont);
}
