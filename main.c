/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeonpar <hyeonpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 05:59:02 by hyeonpar          #+#    #+#             */
/*   Updated: 2021/01/31 05:59:02 by hyeonpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	unsigned int	a;

	a = ft_keyclickcount(5, VK_LBUTTON);
	printf("%d", a);
	return (0);
}
