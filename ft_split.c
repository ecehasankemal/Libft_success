/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:00:31 by hece              #+#    #+#             */
/*   Updated: 2022/09/26 01:00:36 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(const char *str, char c)
{
	int	index;
	int	dot;
	int	trigger;

	index = 0;
	dot = 0;
	trigger = 0;
	while (str[index] != '\0')
	{
		if (str[index] != c && trigger == 0)
		{
				trigger = 1;
				dot++;
		}
		else if (str[index] == c)
				trigger = 0;
		index++;
	}
	return (dot);
}

static char	*ft_word_dup(const char *str, int start, int end)
{
	int		index;
	char	*word;

	index = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
			word[index] = str[start];
			start++;
			index++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	index;
	int		spindex;
	int		start;

	if (!s)
		return (0);
	index = -1;
	spindex = 0;
	start = -1;
	split = malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!split)
		return (0);
	while (++index <= ft_strlen(s))
	{
		if (s[index] != c && start < 0)
			start = index;
		else if ((s[index] == c || index == ft_strlen(s)) && start >= 0)
		{
			split[spindex++] = ft_word_dup(s, start, index);
			start = -1;
		}
	}
	split[spindex] = NULL;
	return (split);
}

/*#include <stdio.h>
int	main(void)
{
	char	delim = ' ';
	char	*src = "hece is always number one";
	char	**result;
	int		i = -1;
	result = ft_split(src, delim);
	while (i++ < 4)
		printf("%d. blalbla: %s\n", i ,result[i]);
}*/
