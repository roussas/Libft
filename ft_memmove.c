/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:09:58 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:19:05 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*srf;

	if (dest == src)
		return (dest);
	ptr = (unsigned char *)dest;
	srf = (const unsigned char *)src;
	i = n;
	if (dest > src)
	{
		while (i > 0)
		{
			i--;
			ptr[i] = srf[i];
		}
		return (ptr);
	}
	i = 0;
	while (i < n)
	{
		ptr[i] = srf[i];
		i++;
	}
	return (ptr);
}
