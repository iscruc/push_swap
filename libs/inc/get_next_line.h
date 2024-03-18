/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:06:18 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/17 19:09:15 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin_gnl(char *str1, char *str2);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strrchr(const char *s, int c);
int		ft_strlen_gnl(const char *str);
char	*ft_line(char *buffer);	
char	*ft_next_and_rest(char *buffer);
char	*get_next_line(int fd);
char	*ft_readfile(int fd, char *stash);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif