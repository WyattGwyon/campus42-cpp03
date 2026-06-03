/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 15:40:53 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	inox("The Inox Shaman");
	FragTrap	frag("The Valwrath");

	crag.giveDamage(inox);
	crag.beRepaired(1);

	inox.giveDamage(crag);
	inox.beRepaired(1);
	inox.guardGate();

	frag.giveDamage(inox);
	frag.beRepaired(1);
	frag.highFivesGuys();
}
