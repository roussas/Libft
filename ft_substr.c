/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:39:23 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:39:30 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*l;
	size_t	i;

	i = 0;
	l = malloc(sizeof(char) * len + 1);
	if (l == NULL)
	{
		return (NULL);
	}
	if (ft_strlen(s) <= start)
	{
		l[0] = '\0';
		return (l);
	}
	while (i < len)
	{
		if (s[start] == '\0')
			break ;
		l[i] = s[start];
		start++;
		i++;
	}
	l[i] = '\0';
	return (l);
}
