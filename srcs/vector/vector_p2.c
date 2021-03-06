/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_p2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:08:01 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:30:55 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vector.h"
#include "libft_mem.h"

bool	vector_init(t_vector *vector, size_t sizeof_elem)
{
	vector->capacity = VECTOR_INIT_CAPACITY;
	vector->total = 0;
	vector->sizeof_elem = sizeof_elem;
	if (!(vector->items = malloc(sizeof_elem * vector->capacity)))
		return (false);
	return (true);
}

int		vector_total(t_vector *da)
{
	return (da->total);
}

void	vector_set(t_vector *da, size_t index, void *item)
{
	if (index < da->total)
		ft_memcpy(da->items + da->sizeof_elem * index, item, da->sizeof_elem);
}

bool	vector_pop(t_vector *da)
{
	return (vector_delete(da, da->total - 1));
}

void	vector_free(t_vector *da)
{
	free(da->items);
	ft_bzero(da, sizeof(t_vector));
}
