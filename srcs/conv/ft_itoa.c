/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:21:53 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:46:22 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size_str(int n)
{
	int		size_str;

	size_str = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size_str++;
	while (n)
	{
		size_str++;
		n /= 10;
	}
	return (size_str);
}

char			*ft_itoa(int n)
{
	size_t			size;
	char			*str;
	int				i;
	unsigned int	nbr;

	size = ft_size_str(n);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = (unsigned int)-n;
	}
	else
		nbr = (unsigned int)n;
	i = size - 1;
	while (str[i] != '-' && i >= 0)
	{
		str[i--] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (str);
}
