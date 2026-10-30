/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:28:00 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/09/30 13:07:39 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	char		*dest;
	const char	*sour;
	size_t		siz;

	dest = dst;
	siz = 0;
	sour = src;
	i = 0;
	while (sour[siz] != '\0')
		siz++;
	if (size == 0)
		return (siz);
	while (i < size - 1)
	{
		if (sour[i] != '\0')
			dest[i] = sour[i];
		else
			break ;
		i++;
	}
	dest[i] = '\0';
	return (siz);
}
