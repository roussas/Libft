/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:54:08 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:39:09 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	const char	*fr;
	const char	*sn;

	i = 0;
	fr = s1;
	sn = s2;
	while (i < n)
	{
		if (!(fr[i] == sn[i]))
			return ((unsigned char)fr[i] - (unsigned char)sn[i]);
		if (fr[i] == '\0' && sn[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
