/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:44:00 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:02:50 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len(int n)
{
	int				i;
	unsigned int	tmp;

	tmp = n;
	if (n < 0)
		tmp = -tmp;
	i = 0;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		i++;
	}
	return (i);
}

static char	*memory(int n)
{
	int		i;
	char	*s;

	i = len(n);
	if (n < 0)
		s = malloc(sizeof(char) * (i + 2));
	else
		s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	return (s);
}

static void	stuff(char *s, int n, int k, unsigned int tmp)
{
	int	i;

	if (n < 0)
	{
		i = k;
		while (i >= 1)
		{
			s[i] = tmp % 10 + '0';
			tmp = tmp / 10;
			i--;
		}
		s[0] = '-';
		s[k + 1] = '\0';
		return ;
	}
	i = k - 1;
	while (i >= 0)
	{
		s[i] = tmp % 10 + '0';
		tmp = tmp / 10;
		i--;
	}
	s[k] = '\0';
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	tmp;
	int				k;

	tmp = n;
	if (n < 0)
		tmp = -tmp;
	k = len(n);
	s = memory(n);
	if (s == NULL)
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
	}
	stuff(s, n, k, tmp);
	return (s);
}
