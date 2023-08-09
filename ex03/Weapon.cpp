/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:02:08 by yabad             #+#    #+#             */
/*   Updated: 2023/08/09 15:13:16 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type) {}

Weapon::~Weapon() {}

void	Weapon::setType(std::string _type) {
	type = _type;
}

const std::string&	Weapon::getType(void) const {
	return (type);
}
