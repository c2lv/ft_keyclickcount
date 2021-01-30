/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyclickcount.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonpar <hyeonpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 01:09:53 by hyeonpar          #+#    #+#             */
/*   Updated: 2021/01/31 01:09:53 by hyeonpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_keyclickcount(unsigned int second, int vkey)
{
	int		count;
	int		minus;
	time_t	t1;
	time_t	t2;

	count = 0;
	minus = 0;
	t1 = time(NULL);
	while (1)
	{
		t2 = time(NULL);
		if (t1 + second <= t2)
			break ;
		if (minus == 1 && GetAsyncKeyState(vkey) < 0)
			continue ;
		else
			minus = 0;
		if (GetAsyncKeyState(vkey) == 1 || GetAsyncKeyState(vkey) < 0)
		{
			if (GetAsyncKeyState(vkey) < 0)
				minus = 1;
			count++;
		}
	}
	return (count);
}
