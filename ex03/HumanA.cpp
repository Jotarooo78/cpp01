/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:15:33 by armosnie          #+#    #+#             */
/*   Updated: 2025/11/26 16:37:28 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string &name, Weapon &weapon) : _name(name), _weapon(weapon){

}

HumanA::~HumanA() {

}

void HumanA::attack() {
    
    std::cout << _name << "is smashing a zombie head with its" << _weapon.getWeaponType() << std::endl;
}