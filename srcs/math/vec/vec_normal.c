/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_normal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:39:08 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:24:56 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec2i		vec2i_normal(t_vec2i vec1)
{
	return ((t_vec2i){-vec1.y, vec1.x});
}

t_vec2f		vec2f_normal(t_vec2f vec1)
{
	return ((t_vec2f){-vec1.y, vec1.x});
}

t_vec2d		vec2d_normal(t_vec2d vec1)
{
	return ((t_vec2d){-vec1.y, vec1.x});
}

t_vec2ui	vec2ui_normal(t_vec2ui vec1)
{
	return ((t_vec2ui){-vec1.y, vec1.x});
}
