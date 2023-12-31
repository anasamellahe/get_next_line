/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:07:13 by anamella          #+#    #+#             */
/*   Updated: 2023/12/29 22:11:11 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memcpy(void *dst, void *src, int n);
char	*ft_strchr(char *s, int c);
char	*read_file(char *s, int fd);
char	*ft_get_line(char *s);
char	*ft_new_str(char *s);
char	*get_next_line(int fd);
// char	*ft_strjoin(char *left_str, char *buff);

#endif