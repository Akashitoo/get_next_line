/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalasub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:44:39 by abalasub          #+#    #+#             */
/*   Updated: 2024/03/21 22:34:57 by abalasub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		i++;
	}
	return (i);
}

int	search_newline(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*generate_last_line(char *str)
{
	char	*line;
	int		i;

	line = malloc(sizeof(char) *(ft_strlen(str) + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i])
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*str;
	char		**p;
	int			i;

	if (!s1)
		return (generate_last_line(s2));
	p = &s1;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	str[ft_strlen(s1) + i] = '\0';
	free(*p);
	return (str);
}

int	index_newline(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		i++;
	}
	return (i);
}
