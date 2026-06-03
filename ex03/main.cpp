/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 17:37:38 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	inox("The Inox Shaman");
	FragTrap	val("The Valwrath");
	DiamondTrap	mel("Melkor", 0, 0, 0);

	std::cout << std::endl;
	crag.giveDamage(inox);
	
	std::cout << std::endl;
	inox.giveDamage(crag);

	std::cout << std::endl;
	val.giveDamage(inox);

	std::cout << std::endl;
	mel.whoami();
	mel.giveDamage(val);
	std::cout << "Diamond Melkor hitPoints: " << mel.getHitPoints() << std::endl;
	std::cout << "Diamond Melkor energyPoints: " << mel.getEnergyPoints() << std::endl;
	std::cout << "Diamond Melkor attackDamage: " << mel.getAttackDamage() << std::endl;
	std::cout << std::endl;
}
