/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:34:05 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:34:40 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*l;

	l = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (l == NULL)
		return (NULL);
	ft_strlcpy(l, s1, ft_strlen(s1) + 1);
	ft_strlcpy(l + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (l);
}
