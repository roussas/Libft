/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:10:10 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/09/30 13:33:53 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dst[k] != '\0' && k < size)
		k++;
	if (k == size)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && k + i + 1 < size)
	{
		dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = '\0';
	return (k + ft_strlen(src));
}
