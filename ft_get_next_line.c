/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:08:43 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/12/11 14:13:21 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Check remainder
*/

static char			*check_rmndr(char *rmndr, char **line)
{
	char	*p_nl;

	p_nl = NULL;
	if (rmndr)
	{
		if ((p_nl = ft_strchr(rmndr, '\n')))
		{
			*p_nl = '\0';
			*line = ft_strdup(rmndr);
			ft_strcpy(rmndr, ++p_nl);
		}
		else
		{
			*line = ft_strdup(rmndr);
			ft_strclr(rmndr);
		}
	}
	else
		*line = ft_strnew(1);
	return (p_nl);
}

/*
** Check remainder from previous operation.
** Tries to find '\n', replace it with '\0',
** save part of the string to remainder and write line
*/

static int			get_line(const int fd, char **line, char **rmndr)
{
	char			buf[BUFF_SIZE + 1];
	int				n;
	char			*p_nl;
	char			*tmp;
	char			*tmp_rmndr;

	if (read(fd, buf, 0) < 0)
		return (-1);
	p_nl = check_rmndr(*rmndr, line);
	while (!p_nl && (n = read(fd, buf, BUFF_SIZE)))
	{
		buf[n] = '\0';
		if ((p_nl = ft_strchr(buf, '\n')))
		{
			*p_nl = '\0';
			tmp_rmndr = *rmndr;
			*rmndr = ft_strdup(++p_nl);
			ft_strdel(&tmp_rmndr);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(*line, buf)) || n < 0)
			return (-1);
		ft_strdel(&tmp);
	}
	return (n || p_nl || ft_strlen(*line)) ? 1 : 0;
}

/*
** Function creates new struct instance for linked list
*/

static t_fd_list	*new_list(int fd)
{
	t_fd_list		*new;

	new = (t_fd_list *)malloc(sizeof(t_fd_list));
	new->fd = fd;
	new->rmndr = NULL;
	new->next = NULL;
	return (new);
}

/*
** Main function, tries to find file descriptor (fd)
** in linked list or create new one.
** We use them to to manage multiple file descriptor.
*/

int					ft_get_next_line(const int fd, char **line)
{
	static t_fd_list	*head;
	t_fd_list			*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	if (head == NULL)
		head = new_list(fd);
	tmp = head;
	while (tmp->fd != fd)
	{
		if (tmp->next == NULL)
			tmp->next = new_list(fd);
		tmp = tmp->next;
	}
	return (get_line(tmp->fd, line, &tmp->rmndr));
}
