/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:14:40 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:18:35 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*fr;
	const unsigned char	*sn;

	i = 0;
	fr = s1;
	sn = s2;
	while (i < n)
	{
		if (fr[i] != sn[i])
			return (fr[i] - sn[i]);
		i++;
	}
	return (0);
}
