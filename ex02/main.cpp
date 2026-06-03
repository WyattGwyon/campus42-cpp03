/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 16:54:00 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	inox("The Inox Shaman", 0, 0, 0);
	FragTrap	frag("The Valwrath", 0, 0, 0);

	std::cout << std::endl;
	crag.giveDamage(inox);
	crag.beRepaired(1);

	std::cout << std::endl;
	inox.giveDamage(crag);
	inox.beRepaired(1);
	inox.guardGate();

	std::cout << std::endl;
	frag.giveDamage(inox);
	frag.beRepaired(1);
	frag.highFivesGuys();
	std::cout << std::endl;
}
