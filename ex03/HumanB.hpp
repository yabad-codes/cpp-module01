/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:11:37 by yabad             #+#    #+#             */
/*   Updated: 2023/07/08 17:25:42 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB(std::string);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon&);
};
#endif
