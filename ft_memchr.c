/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:14:09 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:14:14 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		l;

	l = c;
	i = 0;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == l)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
