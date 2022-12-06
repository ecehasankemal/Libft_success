/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:51:45 by hece              #+#    #+#             */
/*   Updated: 2022/09/18 14:52:52 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t bytelength)
{
	ft_memset(ptr, 0, bytelength);
}

/*#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
}

int	main(void)
{
	char	a[] = "hece\n";
	char	mete[] = "hece";
	ft_putstr(a);
	ft_bzero(mete, 3);
	ft_putstr(mete);
}*/
