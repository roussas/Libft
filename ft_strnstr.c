/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:36:38 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:36:48 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		k = 0;
		while (little[k] != '\0'
			&& i + k < len
			&& big[i + k] == little[k])
			k++;
		if (little[k] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
