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

unsigned int	ft_keyclickcount(unsigned int second, int vkey)
{
	unsigned int	count;
	bool			keypress;
	time_t			t1;
	time_t			t2;

	count = 0;
	keypress = false;
	t1 = time(NULL);
	while (true)
	{
		t2 = time(NULL);
		if (t1 + second <= t2)
			break ;
		if ((!(GetAsyncKeyState(vkey) & 0x0001))
		&& (GetAsyncKeyState(vkey) & 0x8000))
			keypress = true;
		if (keypress && (!(GetAsyncKeyState(vkey) & 0x0001))
		&& (!(GetAsyncKeyState(vkey) & 0x8000)))
		{
			keypress = false;
			count++;
		}
	}
	return (count);
}
