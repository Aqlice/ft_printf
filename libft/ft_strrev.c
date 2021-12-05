/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:29:54 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:30:07 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		s;
	int		e;
	char	stock;

	s = 0;
	e = 0;
	while (str[e])
		e++;
	e--;
	while (s < e)
	{
		stock = str[e];
		str[e] = str[s];
		str[s] = stock;
		e--;
		s++;
	}
	return (str);
}