/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:20:30 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/03 14:26:46 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isascii(int c)
{
   return (
           (
            !(c & -1) &&
            !((127 - c) & -1)
            ) ? 
           1 : 0);
}
