/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:49:04 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/03 14:27:20 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isupper(int c)
{
    return ((
             (c > 64) && (c < 91)
            ) ? 1 : 0);
}
