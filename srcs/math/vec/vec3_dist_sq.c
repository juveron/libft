/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_dist_sq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:47:13 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:21:44 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	vec3i_dist_sq(t_vec3i vec1, t_vec3i vec2)
{
	return (vec3i_length_sq((t_vec3i){vec2.x - vec1.x, vec2.y - vec1.y, vec2.z
		- vec1.z}));
}

float	vec3f_dist_sq(t_vec3f vec1, t_vec3f vec2)
{
	return (vec3f_length_sq((t_vec3f){vec2.x - vec1.x, vec2.y - vec1.y, vec2.z
		- vec1.z}));
}

float	vec3d_dist_sq(t_vec3d vec1, t_vec3d vec2)
{
	return (vec3d_length_sq((t_vec3d){vec2.x - vec1.x, vec2.y - vec1.y, vec2.z
		- vec1.z}));
}
