/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:38:58 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:31:43 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	int		flag;

	i = 0;
	flag = 0;
	ptr = (char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (c == '\0')
		return (ptr + i);
	if (flag == 0)
		return (ptr = NULL);
	return (ptr + i);
}
