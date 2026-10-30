/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:39:14 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:39:18 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;
	size_t	m;

	k = 0;
	m = ft_strlen(s1);
	while (s1[k] && ft_strchr(set, s1[k]))
		k++;
	while (m > k && ft_strchr(set, s1[m - 1]))
		m--;
	return (ft_substr(s1, k, m - k));
}
