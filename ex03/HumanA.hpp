/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:05:56 by yabad             #+#    #+#             */
/*   Updated: 2023/07/08 17:11:30 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void	attack(void);
};
#endif
