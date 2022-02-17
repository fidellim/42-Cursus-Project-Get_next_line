/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:43:29 by flim              #+#    #+#             */
/*   Updated: 2022/02/18 02:18:09 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *buf, char *tmp, char *str);
char	*ft_before(char *str);
char	*ft_after(char *str);
int		has_newline(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const	char *str);

#endif
