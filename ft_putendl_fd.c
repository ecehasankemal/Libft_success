/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:08:54 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 17:08:57 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		write(fd, &s[index], 1);
		index++;
	}
	write(fd, "\n", 1);
}

/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
		int fd ;
		fd = open("deneme4.txt", O_RDWR);
		char k[] =  "nice hahaha";
		ft_putendl_fd(k, fd);
}
*/
