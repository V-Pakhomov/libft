/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_queue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciera <rciera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 18:21:58 by rciera            #+#    #+#             */
/*   Updated: 2020/09/02 18:23:08 by rciera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_queue.h"

int		size_queue(t_queue *q)
{
	int size;

	size = 0;
	while (q)
	{
		size++;
		q = q->next;
	}
	return (size);
}
