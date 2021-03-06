/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:20:25 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:40:11 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MAP_H
# define LIBFT_MAP_H

# include <stdlib.h>
# include <stdbool.h>
# include "libft_bitsize.h"

# define MAP_INIT_CAPACITY	4

typedef struct	s_map_elem
{
	size_t	key;
	void	*data;
}				t_map_elem;

typedef struct	s_map
{
	t_map_elem	*elem;
	size_t		capacity;
	size_t		total;
	size_t		sizeof_elem;
}				t_map;

t_map			*map_init(size_t sizeof_elem);
size_t			map_total(t_map *map);
bool			map_add(t_map *map, size_t key, void *data);
void			*map_get(t_map *map, size_t key);
bool			map_delete(t_map *map, size_t key);
void			map_free(t_map *map);
bool			map_resize(t_map *map, size_t capacity);
void			*map_get_index(t_map *map, t_u64 index);
bool			map_clone(t_map **dst, t_map *src);

#endif
