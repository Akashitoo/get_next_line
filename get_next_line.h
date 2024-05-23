/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalasub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:06:02 by abalasub          #+#    #+#             */
/*   Updated: 2024/02/01 15:19:12 by abalasub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_strlen(const char *s);
int		search_newline(char *str);
int		index_newline(char *str);

char	*generate_last_line(char *str);
char	*get_next_line(int fd);
char	*generate_last_line(char *str);
char	*ft_strjoin(char *s1, char *s2, int len_s1, int len_s2);
char	*cpy_until_nl(char *str);

void	*ft_memset(void *s, int c, size_t n);
void	clean_buffer(char *str);
char	*generate_line(char *buffer, char *line, int *is_nl);

#endif
