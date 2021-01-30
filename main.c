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
	int lshift;

	lshift = 0;
	lshift = ft_keyclickcount(5, VK_LSHIFT);
	printf("%d", lshift);
}
