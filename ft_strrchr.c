/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:49:00 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:37:19 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	int		flag;
	int		pos;

	i = 0;
	pos = 0;
	flag = 0;
	ptr = (char *)s;
	while (ptr[i])
	{
		if (ptr[i] == c)
		{
			flag = 1;
			pos = i;
		}
		i++;
	}
	if (c == '\0')
		return (ptr + i);
	if (flag == 0)
		return (ptr = NULL);
	return (ptr + pos);
}
