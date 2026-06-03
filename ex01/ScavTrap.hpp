/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:51:26 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 16:45:56 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const std::string& name, const int hp, const int ep, const int ad);
	ScavTrap(const ScavTrap& scav);
	ScavTrap	&operator=(const ScavTrap& scav);
	~ScavTrap(void);

	void	attack(const std::string& target);
	void	guardGate();
};

#endif
