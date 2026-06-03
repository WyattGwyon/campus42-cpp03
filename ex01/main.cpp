/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 16:58:47 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	inox("The Inox Shaman", 0, 0, 0);

		std::cout << std::endl;
		inox.giveDamage(crag);
		inox.beRepaired(1);
		inox.guardGate();

		std::cout << std::endl;
		crag.giveDamage(inox);
		crag.beRepaired(1);
		std::cout << std::endl;
}
