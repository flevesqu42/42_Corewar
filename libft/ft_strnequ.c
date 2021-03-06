/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flevesqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 23:05:38 by flevesqu          #+#    #+#             */
/*   Updated: 2015/12/03 18:13:11 by flevesqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2 || (*s1 != *s2 && n))
		return (0);
	while (*s1 == *s2 && *s1 && n - 1)
	{
		s1 += 1;
		s2 += 1;
		n--;
		if (*s1 != *s2)
			return (0);
	}
	return (1);
}
