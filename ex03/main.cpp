/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:55:12 by armosnie          #+#    #+#             */
/*   Updated: 2025/11/26 16:44:40 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("club");
    HumanA Rick = HumanA("Rick", club);
    Rick.attack();

    HumanB Daryl = HumanB("Rick");
    club.setWeaponType("crossbow");
    Daryl.attack();
    return 0;
}