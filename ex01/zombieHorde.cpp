/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:04:59 by yabad             #+#    #+#             */
/*   Updated: 2023/07/07 12:21:23 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie*	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++ ) {
		zombieHorde[i].setName(name);
	}
	return (zombieHorde);
}