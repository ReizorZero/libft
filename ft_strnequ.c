/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:39:13 by rzero             #+#    #+#             */
/*   Updated: 2018/12/12 18:19:12 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 != NULL && s2 != NULL)
	{
		if ((*s1 == '\0' && *s2 == '\0') || n == 0)
			return (1);
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		if (ft_strlen(s1) != ft_strlen(s2) &&
		(ft_strlen(s1) == n || ft_strlen(s2) == n))
			return (0);
		while ((n-- > 0) && (*s1 != '\0'))
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
		return (1);
	}
	return (0);
}
