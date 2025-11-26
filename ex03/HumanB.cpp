/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:26:01 by armosnie          #+#    #+#             */
/*   Updated: 2025/11/26 16:10:27 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string &name) : _name(name){

}

HumanB::~HumanB() {
    
}

void HumanB::attack() {
    
    std::cout << _name << "is smashing a zombie head with its" << _weapon->getWeaponType() << std::endl;

}

void    HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}