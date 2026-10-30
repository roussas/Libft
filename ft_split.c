/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpagkalo <kpagkalo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:28:23 by kpagkalo          #+#    #+#             */
/*   Updated: 2026/10/06 13:43:42 by kpagkalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	isword(char const *s, char c)
{
	int	i;
	int	k;
	int	flag;

	flag = 0;
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			k++;
		}
		if (s[i] == c)
			flag = 0;
		i++;
	}
	return (k);
}

static void	free_mem(char **s, int l)
{
	while (l > 0)
	{
		free(s[l - 1]);
		l--;
	}
	free(s);
}

static char	*fill(char const *s, char c)
{
	int		i;
	int		k;
	char	*p;

	k = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		p[k] = s[i];
		k++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

static int	fill_split(char **split, char const *s, char c)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		split[l] = fill(s + i, c);
		if (split[l] == NULL)
		{
			free_mem(split, l);
			return (0);
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		l++;
	}
	split[l] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		k;

	k = isword(s, c);
	split = malloc(sizeof(char *) * (k + 1));
	if (split == NULL)
		return (NULL);
	if (fill_split(split, s, c) == 0)
		return (NULL);
	return (split);
}
